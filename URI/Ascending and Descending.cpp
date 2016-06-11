#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int x, y;
  while (cin >> x >> y and (x - y)) {
    if (x > y) cout << "Decrescente" << endl;
    else       cout << "Crescente" << endl;
  }
  return 0;
}
