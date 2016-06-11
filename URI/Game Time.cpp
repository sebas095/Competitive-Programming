#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int start, end, ans;
  cin >> start >> end;

  ans = (24 - start + end);
  ans = (ans > 24)? ans - 24 : ans;
  cout << "O JOGO DUROU " << ans << " HORA(S)" << endl;

  return 0;
}
