#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, m, c, ans;
  while (cin >> n >> m >> c and n + m + c) {
    ans = (n - 7) * (m - 7) + c;
    cout << (ans >> 1) << endl;
  }
  return 0;
}
