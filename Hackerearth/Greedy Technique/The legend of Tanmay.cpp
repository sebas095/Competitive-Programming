#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t, n, ni;
  long long maxi, mini;
  cin >> t;

  while (t--) {
    cin >> n;
    maxi = mini = 1;
    vector<int> neg, zero, pos;

    while (n--) {
      cin >> ni;
      if (ni < 0)      neg.push_back(ni);
      else if (ni > 0) pos.push_back(ni);
      else             zero.push_back(ni);
    }

    sort(neg.begin(), neg.end());
    sort(pos.begin(), pos.end());

    for (int i = 0; i < pos.size(); i++) {
      maxi *= (pos[i] + 0LL);
      mini *= (pos[i] + 0LL);
    }

    if (neg.size()) {
      if (neg.size() & 1) {
        for (int i = 0; i < neg.size(); i++) {
          mini *= (neg[i] + 0LL);
          if (i < neg.size() - 1)
            maxi *= (neg[i] + 0LL);
        }
      }
      else {
        for (int i = 0; i < neg.size(); i++) {
          maxi *= (neg[i] + 0LL);
          if (i < neg.size() - 1)
            mini *= (neg[i] + 0LL);
        }
      }
      if (!pos.size()) {
          if (!zero.size()) {
            if (neg.size() < 2)
              maxi = neg[0];
          }
          else if (zero.size() and neg.size() < 2)
            maxi = 0;
      }
    }

    else {
        if (zero.size()) {
          mini = 0;
          if (!pos.size())
            maxi = 0;
        }
        else {
          mini = pos[0];
        }
    }
    cout << maxi << " " << mini << endl;
  }
  return 0;
}
