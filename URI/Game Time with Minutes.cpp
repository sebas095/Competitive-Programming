#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int h1, m1, h2, m2;
  cin >> h1 >> m1 >> h2 >> m2;

  if (h2 > h1) {
    int ans1 = h2 - (h1 + 1);
    int ans2 = (60 - m1) + m2;
    ans1 += ans2 / 60;
    ans2 %= 60;
    cout << "O JOGO DUROU " << ans1 << " HORA(S) E " << ans2 << " MINUTO(S)" << endl;
  }
  else {
    if (h1 == h2 and m2 > m1) {
      cout << "O JOGO DUROU 0 HORA(S) E " << m2 - m1 << " MINUTO(S)" << endl;
    }
    else {
      int ans1 = (24 - (h1 + 1)) + h2;
      int ans2 = (60 - m1) + m2;
      ans1 += ans2 / 60;
      ans2 %= 60;
      cout << "O JOGO DUROU " << ans1 << " HORA(S) E " << ans2 << " MINUTO(S)" << endl;
    }
  }

  return 0;
}
