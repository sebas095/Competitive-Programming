#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (b > c and d > a and (c + d) > (a + b) and (c > 0 and d > 0) and !(a & 1))
    cout << "Valores aceitos" << endl;
  else cout << "Valores nao aceitos" << endl;
  return 0;
}
