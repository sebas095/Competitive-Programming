#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t, an;
  char c;
  double total = 0.0;
  map<char, int> animals;
  cin >> t;

  while (t--) {
    cin >> an >> c;
    animals[c] += an;
  }

  total = animals['C'] + animals['R'] + animals['S'];

  cout << "Total: " << total << " cobaias" << endl;
  cout << "Total de coelhos: " << animals['C'] << endl;
  cout << "Total de ratos: " << animals['R'] << endl;
  cout << "Total de sapos: " << animals['S'] << endl;
  cout << "Percentual de coelhos: " << fixed << setprecision(2) << 100.00 * animals['C'] / total << " \%" << endl;
  cout << "Percentual de ratos: " << fixed << setprecision(2) << 100.00 * animals['R'] / total << " \%" << endl;
  cout << "Percentual de sapos: " << fixed << setprecision(2) << 100.00 * animals['S'] / total << " \%" << endl;

  return 0;
}
