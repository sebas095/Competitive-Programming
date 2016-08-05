#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

string solve(string &p1, string &p2) {
  if (p1 == p2) return "empate";

  if (p1 == "tesoura" and p2 == "papel")   return "rajesh";
  if (p1 == "papel" and p2 == "pedra")     return "rajesh";
  if (p1 == "pedra" and p2 == "lagarto")   return "rajesh";
  if (p1 == "lagarto" and p2 == "spock")   return "rajesh";
  if (p1 == "spock" and p2 == "tesoura")   return "rajesh";
  if (p1 == "tesoura" and p2 == "lagarto") return "rajesh";
  if (p1 == "lagarto" and p2 == "papel")   return "rajesh";
  if (p1 == "papel" and p2 == "spock")     return "rajesh";
  if (p1 == "spock" and p2 == "pedra")     return "rajesh";
  if (p1 == "pedra" and p2 == "tesoura")   return "rajesh";

  if (p2 == "tesoura" and p1 == "papel")   return "sheldon";
  if (p2 == "papel" and p1 == "pedra")     return "sheldon";
  if (p2 == "pedra" and p1 == "lagarto")   return "sheldon";
  if (p2 == "lagarto" and p1 == "spock")   return "sheldon";
  if (p2 == "spock" and p1 == "tesoura")   return "sheldon";
  if (p2 == "tesoura" and p1 == "lagarto") return "sheldon";
  if (p2 == "lagarto" and p1 == "papel")   return "sheldon";
  if (p2 == "papel" and p1 == "spock")     return "sheldon";
  if (p2 == "spock" and p1 == "pedra")     return "sheldon";
  if (p2 == "pedra" and p1 == "tesoura")   return "sheldon";
}

int main() {
  fast;
  int t;
  string sheldon, raj;
  cin >> t;

  while (t--) {
    cin >> raj >> sheldon;
    cout << solve(raj, sheldon) << endl;;
  }

  return 0;
}
