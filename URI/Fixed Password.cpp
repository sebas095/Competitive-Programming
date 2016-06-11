#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define npos string::npos

using namespace std;

typedef long long ll;

int main() {
  fast;
  int n;
  while (cin >> n) {
    if (n == 2002) {
      cout << "Acesso Permitido" << endl;
      break;
    }
    else cout << "Senha Invalida" << endl;
  }
  return 0;
}
