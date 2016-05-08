#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

ll fact(int n, int k) {
  ll ans = 1;
  for (int i = 0; i < n; i++) {
    ll tmp = n - (i * k);
    if (tmp < 1) break;
    ans *= (n - (i * k));
  }
  return ans;
}

int to_int(string s) {
  return atoi(s.c_str());
}

int main() {
  fast;
  int t;
  string s;
  cin >> t;

  while (t--) {
    cin >> s;
    int n, k, index = s.find('!');
    n = to_int(s.substr(0, index));
    k = s.size() - index;
    cout << fact(n, k) << endl;
  }

  return 0;
}
