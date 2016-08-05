#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, i = 0;
  string s;
  cin >> n;

  while (n--) {
    cin >> s;
    if (i++) cout << " ";
    if (s.size() == 3) {
      if (s.substr(0, 2) == "OB" or s.substr(0, 2) == "UR") {
        cout << s.substr(0, 2) + "I";
      }
      else cout << s;
    }
    else cout << s;
  }

  cout << endl;
  return 0;
}
