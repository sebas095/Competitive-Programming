#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, la, lb, sa, sb;
  cin >> n >> la >> lb >> sa >> sb;

  if (n >= la && n <= lb && n >= sa && n <= sb) cout << "possivel" << endl;
  else cout << "impossivel" << endl;

  return 0;
}
