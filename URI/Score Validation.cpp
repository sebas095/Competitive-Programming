#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

bool valid(double n) {
  return n >= 0.0 and n <= 10.0;
}

int main () {
  fast;
  double note, av = 0.0;
  int cont = 0;

  while (true) {
    if (cont == 2) break;
    cin >> note;
    
    if (valid(note)) {
      av += note;
      cont++;
    }
    else cout << "nota invalida" << endl;
  }

  cout << "media = " << fixed << setprecision(2) << av / 2.0 << endl;
  return 0;
}
