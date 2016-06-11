#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n;
  long long ans = 1;
  cin >> n;
  for (int i = 1; i <= n; i++) ans *= i;
  cout << ans << endl;
  return 0;
}
