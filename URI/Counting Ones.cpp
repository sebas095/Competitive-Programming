#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

ll countOnes(ll n) {
  ll i, acc = 0;
  int cont = 0;

  for (i = 60; i >= 0; i--) {
    if ((n >> i) & 1) {
      if (i != 0) acc += i * (1LL << (i - 1));
      acc += cont * (1LL << i);
      cont++;
    }
  }
  return acc;
}

int main() {
  fast;
  ll a, b;

  while (cin >> a >> b) {
    cout << countOnes(b + 1) - countOnes(a) << endl;
  }

  return 0;
}
