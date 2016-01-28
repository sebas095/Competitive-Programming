#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, l, c;
  while (cin >> n >> l >> c) {
    int contL = 0, contP = 1, aux = 0;
    vector<string> text(n);

    for (int i = 0; i < n; i++) cin >> text[i];
    for (int i = 0; i < text.size(); i++) {
      aux += text[i].size() + 1;
      if (contL == l) {
        contP++;
        contL = 0;
      }
      if (aux == c + 1) {
        contL++;
        aux = 0;
      }
      else if (aux > c + 1) {
        contL++;
        aux = 0;
        i--;
      }
    }

    cout << contP << endl;
  }
  return 0;
}
