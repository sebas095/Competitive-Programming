#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

int main() {
  fast;
  int n = 5, par = 0, impar = 0, neg = 0, pos = 0;
  ll x;

  while (n--) {
    cin >> x;
    if (x > 0) pos++;
    if (x < 0) neg++;
    if (x & 1) impar++;
    if (!(x & 1)) par++;
  }

  cout << par << " valor(es) par(es)" << endl;
  cout << impar << " valor(es) impar(es)" << endl;
  cout << pos << " valor(es) positivo(s)" << endl;
  cout << neg << " valor(es) negativo(s)" << endl;
  return 0;
}
