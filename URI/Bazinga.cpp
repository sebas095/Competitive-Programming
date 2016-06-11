#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

string solve(string &p1, string &p2) {
  if (p1 == p2) return "De novo!";

  if (p1 == "tesoura" and p2 == "papel")   return "Bazinga!";
  if (p1 == "papel" and p2 == "pedra")     return "Bazinga!";
  if (p1 == "pedra" and p2 == "lagarto")   return "Bazinga!";
  if (p1 == "lagarto" and p2 == "Spock")   return "Bazinga!";
  if (p1 == "Spock" and p2 == "tesoura")   return "Bazinga!";
  if (p1 == "tesoura" and p2 == "lagarto") return "Bazinga!";
  if (p1 == "lagarto" and p2 == "papel")   return "Bazinga!";
  if (p1 == "papel" and p2 == "Spock")     return "Bazinga!";
  if (p1 == "Spock" and p2 == "pedra")     return "Bazinga!";
  if (p1 == "pedra" and p2 == "tesoura")   return "Bazinga!";

  if (p2 == "tesoura" and p1 == "papel")   return "Raj trapaceou!";
  if (p2 == "papel" and p1 == "pedra")     return "Raj trapaceou!";
  if (p2 == "pedra" and p1 == "lagarto")   return "Raj trapaceou!";
  if (p2 == "lagarto" and p1 == "Spock")   return "Raj trapaceou!";
  if (p2 == "Spock" and p1 == "tesoura")   return "Raj trapaceou!";
  if (p2 == "tesoura" and p1 == "lagarto") return "Raj trapaceou!";
  if (p2 == "lagarto" and p1 == "papel")   return "Raj trapaceou!";
  if (p2 == "papel" and p1 == "Spock")     return "Raj trapaceou!";
  if (p2 == "Spock" and p1 == "pedra")     return "Raj trapaceou!";
  if (p2 == "pedra" and p1 == "tesoura")   return "Raj trapaceou!";
}

int main() {
  fast;
  int t, tc = 1;
  string sheldon, raj;
  cin >> t;

  while (t--) {
    cin >> sheldon >> raj;
    cout << "Caso #" << tc++ << ": " << solve(sheldon, raj) << endl;;
  }

  return 0;
}
