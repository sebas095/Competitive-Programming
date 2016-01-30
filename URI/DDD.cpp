#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  map<int, string> DDD;
  DDD[61] = "Brasilia";
  DDD[71] = "Salvador";
  DDD[11] = "Sao Paulo";
  DDD[21] = "Rio de Janeiro";
  DDD[32] = "Juiz de Fora";
  DDD[19] = "Campinas";
  DDD[27] = "Vitoria";
  DDD[31] = "Belo Horizonte";

  int n;
  cin >> n;
  if (!DDD[n].empty()) cout << DDD[n] << endl;
  else        cout << "DDD nao cadastrado" << endl;

  return 0;
}
