#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

// Autor: pin3da

using namespace std;

void rows(int a, int b, char c, int nl = 0) {
  for (int i = 0; i < a; ++i) {
    for (int j = 0; j < b; ++j)
      cout << c;
    if (nl) cout << endl;
  }
}

int main() {
  fast;
  int s, t, n, nc = 0;

  while (cin >> s >> t >> n && (s + t + n)) {
    cout << "Case " << ++nc << ":" << endl;
    rows(t, (n + 1) * t + n * s, '*', 1);

    for (int k = 0; k < n; ++k) {
      for (int j = 0; j < s; ++j) {
        rows(1, t, '*');
        for (int i = 0; i < n; ++i) {
          rows(1, s, '.');
          rows(1, t, '*');
        }
        cout << endl;
      }
      rows(t, (n + 1) * t + n * s, '*', 1);
    }
    cout << endl;
  }
  return 0;
}
