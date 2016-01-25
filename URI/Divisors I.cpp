#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

int main() {
  fast;
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) cout << i << endl;
  }
  return 0;
}
