#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

vector<bool> primes(10000004, false);

void sieve() {
  primes[2] = true;
  for (int i = 3; i < primes.size(); i += 2) primes[i] = true;
  for (int i = 3; i <= sqrt(primes.size()); i++) {
    if (primes[i]) {
      for (int j = 3; i * j < primes.size(); j++) primes[i * j] = false;
    }
  }
}

int main() {
  fast;
  sieve();
  int n, p;
  cin >> n;

  while (n--) {
    cin >> p;
    cout << p;
    (primes[p])? cout << " eh primo" << endl : cout << " nao eh primo" << endl;
  }

  return 0;
}
