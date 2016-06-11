#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main() {
  fast;
  int d = 0, vf = 0, vg = 0;
  double dista = 0, tf = 0, tg = 0;

  while(cin >> d) {
    cin >> vf >> vg;
    dista = sqrt(144 + d * d);
    tf = 12.0 / vf;
    tg = dista / vg;

    cout << ((tf >= tg)? "S" : "N") << endl;
  }

  return 0;
}
