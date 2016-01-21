#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, m, tmp, k, v;
  while (cin >> n >> m) {
    int index = 1;
    map<int, vector<int> > occ;

    while (n--) {
      cin >> tmp;
      occ[tmp].push_back(index);
      index++;
    }

    while (m--) {
      cin >> k >> v;
      if (k <= occ[v].size()) cout << occ[v][k -1] << endl;
      else cout << "0" << endl;
    }
  }
  return 0;
}
