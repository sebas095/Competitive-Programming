#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;
typedef unsigned long long ull;

ull fact(int n) {
  ull ans = 1;
  for (int i = 1; i <= n; i++)
    ans *= i;
  return ans;
}

int main() {
  fast;
  int m, n;
  ull a, b;
  while (cin >> m >> n) {
    cout << fact(m) + fact(n) << endl;
  }
  return 0;
}
