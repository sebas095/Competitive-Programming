#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

string toStr(int n) {
  stringstream ss;
  ss << n;
  return ss.str();
}

int one_digit(string &s) {
  int ans = 0;
  string tmp = s;

  while (true) {
    for (int i = 0; i < tmp.size(); i++) {
      ans += (tmp[i] - '0');
    }
    if (ans < 10) return ans;
    else {
      tmp = toStr(ans);
      ans = 0;
    }
  }
}

int main() {
  fast;
  string a, b;

  while (cin >> a >> b and (a != "0" or b != "0")) {
    int n = one_digit(a);
    int m = one_digit(b);
    if (n > m)      cout << "1" << endl;
    else if (n < m) cout << "2" << endl;
    else            cout << "0" << endl;
  }

  return 0;
}
