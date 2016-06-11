#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n;
  vector<long long> fib(42, 0);
  fib[0] = fib[1] = 1;
  for (int i = 2; i < 42; i++) fib[i] = fib[i - 1] + fib[i - 2];

  while (cin >> n and n) {
    cout << fib[n] << endl;
  }
  return 0;
}
