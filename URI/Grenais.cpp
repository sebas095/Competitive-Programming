#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t1, t2, q, inter = 0, gremio = 0, empates = 0;

  while (true) {
    cin >> t1 >> t2 >> q;
    cout << "Novo grenal (1-sim 2-nao)" << endl;
    if (t1 == t2)     empates++;
    else if (t1 > t2) inter++;
    else              gremio++;
    if (q == 2) break;
  }

  cout << inter + gremio + empates << " grenais" << endl;
  cout << "Inter:" << inter << endl;
  cout << "Gremio:" << gremio << endl;
  cout << "Empates:" << empates << endl;

  if (inter > gremio)      cout << "Inter venceu mais" << endl;
  else if (inter < gremio) cout << "Gremio venceu mais" << endl;
  else                     cout << "Nao houve vencedor" << endl;

  return 0;
}
