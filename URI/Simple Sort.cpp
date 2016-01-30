#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int a, b, c;
  vector<int> v(3);
  cin >> a >> b >> c;

  v[0] = a; v[1] = b; v[2] = c;
  sort(v.begin(), v.end());

  for (int i = 0; i < 3; i++) cout << v[i] << endl;
  cout << endl << a << endl << b << endl << c << endl;

  return 0;
}
