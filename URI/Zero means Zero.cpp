#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

string solve(ll n) {
  stringstream ss;
  string ans;
  ss << n;
  ss >> ans;

  ans.erase(remove(ans.begin(), ans.end(), '0'), ans.end());
  return ans;
}

int main() {
  fast;
  ll a, b;

  while (cin >> a >> b and a + b) {
    cout << solve(a + b) << endl;
  }

  return 0;
}
