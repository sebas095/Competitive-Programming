#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int a, c, m, x, x1 = 0;

  while (cin >> a >> c >> m >> x) {
    set<pair <int, int> > num;
    set<pair <int, int> > num2;

    while(true) {
      x1 = (a * x + c) % m;
      pair<int, int> ne(x, x1);

      if (num.count(ne)) break;
      else num.insert(ne);
      x = x1;
    }

    int cc = 0;
    x = (a * x + c) % m;

    while(true) {
      x1 = (a * x + c) % m;
      pair<int, int> ne(x, x1);

      if (num2.count(ne)) break;
      else {
        if (num.count(ne)) cc++;
        num2.insert(ne);
      }
      x = x1;
    }

    if (num.size() == m) cout << "YES ";
    else cout << "NO ";
    cout << num.size() << " " << (num.size() - cc) << " " << cc << endl;
  }
  return 0;
}
