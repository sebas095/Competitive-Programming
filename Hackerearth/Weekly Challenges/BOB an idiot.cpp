#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define ff first
#define ss second

using namespace std;

int main() {
  fast;
  char a, b;
  string s;
  int n;
  map<char, int> alp;
  map<char, char> ans;
  for (int i = 0; i < 26; i++) alp['A' + i] = i;
  cin >> n;

  while (n--) {
    cin >> a >> b;
    swap(alp[a], alp[b]);
  }

  for (auto &it : alp) {
    ans[it.ss + 'A'] = it.ff;
    ans[it.ss + 'a'] = it.ff + 32;
  }

  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (ans[s[i]])
      cout << ans[s[i]];
    else
      cout << s[i];
  }
  cout << endl;
  return 0;
}
