#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t, n;
  string s;
  cin >> t;

  while (t--) {
    cin >> n;
    map<string, int> cont;

    while (n--) {
      cin >> s;
      cont[s]++;
    }

    if (cont.size() > 1) {
      cout << "ingles" << endl;
    }
    else {
      cout << (*cont.begin()).first << endl;
    }
  }

  return 0;
}
