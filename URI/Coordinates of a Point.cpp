#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

string cuadrant(double &x, double &y) {
  if (x == 0.0 and y == 0.0) return "Origem";
  if (x == 0.0)              return "Eixo Y";
  if (y == 0.0)              return "Eixo X";
  if (x > 0.0 and y > 0.0)   return "Q1";
  if (x < 0.0 and y > 0.0)   return "Q2";
  if (x < 0.0 and y < 0.0)   return "Q3";
  if (x > 0.0 and y < 0.0)   return "Q4";
}

int main() {
  fast;
  double x, y;
  cin >> x >> y;
  cout << cuadrant(x, y) << endl;
  return 0;
}
