#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define PI 3.14159

using namespace std;

int main() {
  fast;
  double a, b, c;
  cin >> a >> b >> c;
  cout << fixed << setprecision(3);
  cout << "TRIANGULO: " << (a * c) / 2 << endl;
  cout << "CIRCULO: " << c * c * PI << endl;
  cout << "TRAPEZIO: " << (a + b) * c / 2 << endl;
  cout << "QUADRADO: " << b * b << endl;
  cout << "RETANGULO: " << a * b << endl;
  return 0;
}
