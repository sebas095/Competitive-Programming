#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  double a, b, c;
  cin >> a >> b >> c;
  if (b > a) swap(a, b);
  if (c > a) swap(a, c);

  if (a >= b + c) cout << "NAO FORMA TRIANGULO" << endl;
  else {
    if (a * a == (b * b) + (c * c)) cout << "TRIANGULO RETANGULO" << endl;
    else if (a * a > (b * b) + (c * c)) cout << "TRIANGULO OBTUSANGULO" << endl;
    else if (a * a < (b * b) + (c * c)) cout << "TRIANGULO ACUTANGULO" << endl;

    if (a == b and b == c) cout << "TRIANGULO EQUILATERO" << endl;
    else if (a == b or b == c or a == c) cout << "TRIANGULO ISOSCELES" << endl;
  }

  return 0;
}
