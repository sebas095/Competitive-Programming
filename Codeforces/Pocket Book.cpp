#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define MOD (long long)(1e9 + 7)

using namespace std;

int main() {
  fast;
  int n, m;
  long long ans = 1;
  string s;
  cin >> n >> m;
  vector <set<char> > pocket(m);

  for (int i = 0; i < n; i++) {
    cin >> s;
    for (int i = 0; i < m; i++) {
      pocket[i].insert(s[i]);
    }
  }

  for (int i = 0; i < pocket.size(); i++) {
    ans *= pocket[i].size();
    ans %= MOD;
  }

  cout << ans << endl;
  return 0;
}
