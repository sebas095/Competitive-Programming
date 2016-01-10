#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t, m, n, g, h, good, great, a, b;
  cin >> t;

  while (t--) {
    good = great = 0;
    map<int, multiset<int> > subjects1, subjects2;
    map<int, multiset<int> >::iterator it;
    multiset<int>::iterator itt;
    cin >> m >> n;

    while (m--) {
      cin >> a >> b;
      subjects1[a].insert(b);
    }

    while (n--) {
      cin >> a >> b;
      subjects2[a].insert(b);
    }

    cin >> g >> h;
    for (it = subjects2.begin(); it != subjects2.end(); ++it) {
        if (subjects1[it -> first].size()) {
          good += min(subjects2[it -> first].size(), subjects1[it -> first].size());
          for (itt = subjects2[it -> first].begin(); itt != subjects2[it -> first].end(); ++itt) {
            if (subjects1[it -> first].count(*itt)) {
              subjects1[it -> first].erase(*itt);
              great++;
            }
          }
        }
    }

    if (good >= g) {
      if (great >= h) cout << "Great" << endl;
      else cout << "Good" << endl;
    }
    else cout << ":(" << endl;
  }
  return 0;
}
