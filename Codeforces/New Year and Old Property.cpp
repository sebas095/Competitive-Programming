#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int zeros(long long n) {
  long long pot, bin;
  int total_zeros = 0;
  for (int i = 2; i <= 61; i++) {
    pot = (1LL << i) - 1; // Genera los binarios 11, 111, 1111 ...
    for (int j = 0; j < i - 1; j++) {
      bin = pot ^ (1LL << j); // Genera los binarios 10, 110, 101 ...
      if (bin <= n)
        total_zeros++;
    }
  }
  return total_zeros;
}

int main() {
  fast;
  long long a, b;
  cin >> a >> b;
  cout << zeros(b) - zeros(a - 1) << endl;
  return 0;
}
