#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  string a, b, c;
  cin >> a >> b >> c;

  a += b;
  sort(a.begin(), a.end());
  sort(c.begin(), c.end());
  cout << ((a == c)? "YES" : "NO") << endl;

  return 0;
}
