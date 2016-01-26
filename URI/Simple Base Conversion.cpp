#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define npos string::npos

using namespace std;
typedef long long ll;

ll toInt(string s) {
  stringstream ss;
  ss << s;
  ll x;
  ss >> x;
  return x;
}

int main() {
  fast;
  string s;

  while (cin >> s and s[0] != '-') {
    string s2 = "";
    if (s.find("0x") != npos) {
      ll deci = 0;
      stringstream ss;
      ss << s;
      ss >> hex >> deci;
      cout << deci << endl;
    }
    else {
      stringstream ss;
      ss << hex << toInt(s);
      string s2(ss.str());
      transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
      cout << "0x" << s2 << endl;
    }
  }
  return 0;
}
