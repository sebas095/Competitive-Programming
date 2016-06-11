#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

string play(string &player1, string &player2) {
  if (player1 == "ataque" and player2 == "pedra") return "Jogador 1 venceu";
  if (player1 == "pedra" and player2 == "papel") return "Jogador 1 venceu";
  if (player1 == "papel" and player2 == "ataque") return "Jogador 2 venceu";

  if (player2 == "ataque" and player1 == "pedra") return "Jogador 2 venceu";
  if (player2 == "pedra" and player1 == "papel") return "Jogador 2 venceu";
  if (player2 == "papel" and player1 == "ataque") return "Jogador 1 venceu";

  if (player1 == "papel" and player2 == "papel") return "Ambos venceram";
  if (player1 == "pedra" and player2 == "pedra") return "Sem ganhador";
  if (player1 == "ataque" and player2 == "ataque") return "Aniquilacao mutua";
}

int main() {
  fast;
  int n;
  string player1, player2;
  cin >> n;

  while (n--) {
    cin >> player1 >> player2;
    cout << play(player1, player2) << endl;
  }

  return 0;
}
