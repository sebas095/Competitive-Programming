#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int index(double &n) {
  if (n >= 0 and n <= 25) return 0;
  if (n > 25 and n <= 50) return 1;
  if (n > 50 and n <= 75) return 2;
  if (n > 75 and n <= 100) return 3;
  return -1;
}

int main() {
  fast;
  vector<string> interval = {"[0,25]", "(25,50]", "(50,75]", "(75,100]"};
  double n;
  cin >> n;

  if (index(n) == -1) cout << "Fora de intervalo" << endl;
  else {
    cout << "Intervalo " << interval[index(n)] << endl;
  }

  return 0;
}
