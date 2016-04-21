#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, nc = 1;

  while (cin >> n) {
    int num = ((n * (n + 1)) >> 1) + 1;
    string s = (num > 1)? " numeros" : " numero";

    cout << "Caso " << nc++ << ": " << num << s << endl;
    cout << "0";

    for (int i = 0; i <= n; i++) {
      for (int j = 0; j < i; j++) {
        cout << " " << i;
      }
    }
    cout << endl << endl;
  }

  return 0;
}
