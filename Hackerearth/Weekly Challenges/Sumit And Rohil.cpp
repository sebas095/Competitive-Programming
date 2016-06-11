#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

bool solve(string a, string b) {
  if (a.size() != b.size()) return false;
  if (a[0] != b[0] or a[a.size() - 1] != b[b.size() - 1]) return false;

  vector<int> alp(26, 0);
  for (int i = 0; i < a.size(); i++) {
    alp[a[i] - 'a']++;
    alp[b[i] - 'a']--;
  }
  for (int i = 0; i < 26; i++) if (alp[i]) return false;
  return true;
}

int main() {
  fast;
  int n;
  cin >> n;
  vector<string> names(n);
  int ans = n;

  for (int i = 0; i < n; i++) {
    cin >> names[i];
    for (int j = 0; j < i; j++) {
      if (solve(names[i], names [j])) {
        ans--;
        break;
      }
    }
  }

  cout << ans << endl;

  return 0;
}
