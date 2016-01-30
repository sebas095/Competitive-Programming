#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define MAX(a, b, c) max(a, max(b, c))

using namespace std;

int main() {
  fast;
  int a, b, c;
  cin >> a >> b >> c;
  cout << MAX(a, b, c) << " eh o maior" << endl;
  return 0;
}
