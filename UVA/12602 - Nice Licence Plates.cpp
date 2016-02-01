#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int toInt(string s) {
  stringstream ss;
  ss << s;
  int n;
  ss >> n;
  return n;
}

int base26(string s) {
  int a = 26 * 26;
  int b = 26;
  int ans = 0;
  ans += (s[0] - 'A') * a;
  ans += (s[1] - 'A') * b;
  ans += (s[2] - 'A');
  return ans;
}

int main() {
  fast;
  int cases;
  cin >> cases;

  while (cases--) {
    string s;
    cin >> s;
    int a = base26(s.substr(0,3));
    int b = toInt(s.substr(4));
    cout << ((abs(a - b) <= 100)? "nice" : "not nice") << endl;
  }
  return 0;
}
