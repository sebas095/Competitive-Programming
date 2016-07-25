#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

using namespace std;

int main() {
  fast;
  string s;
  bool newline = false;

  while (cin >> s) {
    bool ord = false, fest = false;
    long mod4 = 0, mod15 = 0, mod55 = 0, mod100 = 0, mod400 = 0;
    if (newline) cout << endl;
    newline = true;

    for (int i = 0; i < s.size(); i++) {
      mod4 = ((mod4 * 10) + (s[i] + - '0')) % 4;
      mod15 = ((mod15 * 10) + (s[i] + - '0')) % 15;
      mod55 = ((mod55 * 10) + (s[i] + - '0')) % 55;
      mod100 = ((mod100 * 10) + (s[i] + - '0')) % 100;
      mod400 = ((mod400 * 10) + (s[i] + - '0')) % 400;
    }

    if ((!mod4 and mod100) or !mod400) {
      cout << "This is leap year." << endl;
      ord = fest = true;
    }

    if (!mod15) {
      cout << "This is huluculu festival year." << endl;
      ord = true;
    }

    if (fest and !mod55) {
      cout << "This is bulukulu festival year." << endl;
    }

    if (!ord) {
      cout << "This is an ordinary year." << endl;
    }
  }

  return 0;
}
