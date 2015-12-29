#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

using namespace std;

bool count(int a, int b) {
  vector <bool> digit(10, false);
  while (a) {
    digit[a % 10] = true;
    a /= 10;
  }
  while (b) {
    if (digit[b % 10])
      return true;
    b /= 10;
  }
  return false;
}

int main() {
  fast;
  int n, ans = 0;
  cin >> n;

  for (int i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      ans += count(n, i);
      if (n != i * i)
        ans += count(n, n / i);
    }
  }

  cout << ans << endl;
  return 0;
}
