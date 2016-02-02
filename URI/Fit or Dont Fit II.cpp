#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define npos string::npos

using namespace std;

int main() {
  fast;
  int t;
  string a, b;
  cin >> t;

  while (t--) {
    cin >> a >> b;
    if (a.find(b) != npos) {
      if (a.find(b) == (a.size() - b.size()))
        cout << "encaixa" << endl;
      else cout << "nao encaixa" << endl;
    }
    else cout << "nao encaixa" << endl;
  }

  return 0;
}
