#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;
typedef long long ll;

int main() {
  fast;
  ll n, t;
  cin >> n >> t;
  cout << fixed << setprecision(30) << exp(log(n) + t * log(1.000000011)) << endl;
  return 0;
}
