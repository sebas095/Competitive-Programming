#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int x, y;
  cin >> x >> y;
  cout << ceil((double) y / (double)(y - x)) << endl;
  return 0;
}
