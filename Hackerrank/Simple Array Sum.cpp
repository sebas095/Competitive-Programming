#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long int lli;

int main() {
  fast;
  int n;
  cin >> n;
  vector<lli> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  cout << accumulate(v.begin(), v.end(), 0LL) << endl;
  return 0;
}
