#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, h, m, s;
  cin >> n;

  h = n / 3600;
  m = (n % 3600) / 60;
  s = (n % 3600) % 60;

  cout << h << ":" << m << ":" << s << endl;
  return 0;
}
