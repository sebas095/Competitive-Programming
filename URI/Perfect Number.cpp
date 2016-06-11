#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

long long perfectNumber(long long n) {
  long long ans = 0;
  for (int i = 1; i <= (n >> 1); i++) {
    if (n % i == 0) ans += i;
  }
  return ans;
}

int main() {
  fast;
  int n;
  long long x;
  cin >> n;

  while (n--) {
    cin >> x;
    cout << x;
    (perfectNumber(x) == x)? cout << " eh perfeito" << endl : cout << " nao eh perfeito" << endl;
  }
  return 0;
}
