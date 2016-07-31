#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    int id;
    set<int> sheeps;

    while (n--) {
      cin >> id;
      sheeps.insert(id);
    }

    cout << sheeps.size() << endl;
  }

  return 0;
}
