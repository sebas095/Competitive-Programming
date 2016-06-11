#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;
typedef long long int ll;

int main() {
  fast;
  ll n;
  cin >> n;
  cout << ((n & 1)? 1 : 2) << endl;
  return 0;
}
