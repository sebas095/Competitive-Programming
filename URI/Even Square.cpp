#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n;
  cin >> n;
  for (int i = 1; i <= (n >> 1); i++) {
    cout << (i << 1) << "^2 = " << (i << 1) * (i << 1) << endl;
  }
  return 0;
}
