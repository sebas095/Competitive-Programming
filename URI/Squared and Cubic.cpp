#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

ll power(int base, int expo) {
  ll ans = 1;
  for (int i = 0; i < expo; i++)
    ans *= base;
  return ans;
}

int main() {
  fast;
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
    cout << i << " " << power(i, 2) << " " << power(i, 3) << endl;

  return 0;
}
