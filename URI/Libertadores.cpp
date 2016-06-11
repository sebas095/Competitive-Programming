#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, m, v;
  char x;
  cin >> n;

  while (n--) {
    int p1 = 0, p2 = 0, tot1 = 0, tot2 = 0;

    cin >> m >> x >> v;
    p2 = v; tot1 += m; tot2 += v;
    cin >> m >> x >> v;
    p1 = v; tot1 += v; tot2 += m;

    if (tot1 > tot2) {
      cout << "Time 1" << endl;
    }
    else if (tot2 > tot1) {
      cout << "Time 2" << endl;
    }
    else {
      if (p1 > p2) cout << "Time 1" << endl;
      else if (p2 > p1) cout << "Time 2" << endl;
      else cout << "Penaltis" << endl;
    }
  }

  return 0;
}
