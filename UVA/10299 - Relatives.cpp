#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

long long phi(long long n) {
  long long ans = n, p = 0;

  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0)
      ans -= ans / i;

    while (n % i == 0)
      n /= i;
  }

  if (n > 1)
    ans -= ans / n;

  return ans;
}

int main() {
  fast;
  int t;
  long long n;

  while (cin >> n and n) {
    cout << ((n == 1)? 0 : phi(n)) << endl;
  }
  return 0;
}
