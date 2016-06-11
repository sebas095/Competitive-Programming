#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define npos string::npos

using namespace std;

bool palindrome(string s) {
  string inv = string(s.rbegin(), s.rend());
  return s == inv;
}

int main() {
  fast;
  string mirror = "AHIMOTUVWXY";
  bool ok = true;
  string s;
  cin >> s;
  if (palindrome(s)) {
    for (int i = 0; i < s.size(); i++) {
      if (mirror.find(s[i]) == npos) {
        ok = false;
        break;
      }
    }
  }
  else ok = false;
  cout << ((ok)? "YES" : "NO") << endl;
  return 0;
}
