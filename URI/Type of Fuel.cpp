#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  vector<int> fuel(4, 0);
  int n;

  while (true) {
    cin >> n;

    while (true) {
      if (n >= 1 and n <= 4) break;
      cin >> n;
    }

    if (n == 4) break;
    fuel[n]++;
  }

  cout << "MUITO OBRIGADO" << endl;
  cout << "Alcool: " << fuel[1] << endl;
  cout << "Gasolina: " << fuel[2] << endl;
  cout << "Diesel: " << fuel[3] << endl;

  return 0;
}
