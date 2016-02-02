#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n;

  while (cin >> n and n) {
    cout << (n * (n + 1) * ((n << 1) + 1)) / (3 << 1) << endl;
  }

  return 0;
}
