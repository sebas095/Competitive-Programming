#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

// http://codeforces.com/contest/612/problem/A

using namespace std;

ostream& operator << (ostream& out, vector<string> &ans) {
  out << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++)
    out << ans[i] << endl;
  return out;
}

int main() {
  fast;
  bool end = false;
  int n, p, q;
  string s;
  vector<string> ans;
  cin >> n >> p >> q >> s;

  // Optimizacion de N^2 a N:
  // i * p + j * q == n
  // j = (n - i * p)/q;

  for (int i = 0; i <= n; i++) {
    int j = (n - i * p)/q;
    if (j < 0) break;
    if (i * p + j * q == n) {
      end = true;
      int tmp = 0;
      for (int k = 0; k < i; k++, tmp += p) ans.push_back(s.substr(k * p, p));
      for (int k = 0; k < j; k++)           ans.push_back(s.substr(k * q + tmp, q));
      break;
    }
  }

  (end)? cout << ans : cout << "-1" << endl;
  return 0;
}
