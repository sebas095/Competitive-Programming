#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, m;
  string s;
  cin >> n >> m;

  while (m--) {
    cin >> s;
    if (s == "fechou") n++;
    else n--;
  }

  cout << n << endl;
  return 0;
}
