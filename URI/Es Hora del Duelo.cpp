#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

struct entry {
  int a, d, h;
};

int main() {
  fast;
  bool ok = false;
  int n, a, d, h;
  cin >> n >> a >> d >> h;
  vector<entry> cards(n);

  for (int i = 0; i < n; i++) {
    cin >> cards[i].a >> cards[i].d >> cards[i].h;
  }

  for (int i = 0; i < (1 << n); i++) {
    if (ok) break;
    int aa = 0, dd = 0, hh = 0;

    if(__builtin_popcount(i) <= 1) continue;
    for (int j = 0; j < n; j++) {
      if ((i >> j) & 1) {
        aa += cards[j].a;
        dd += cards[j].d;
        hh += cards[j].h;
      }
    }
    if (aa == a and dd == d and hh == h) ok = true;
  }

  cout << ((ok)? "Y" : "N") << endl;

  return 0;
}
