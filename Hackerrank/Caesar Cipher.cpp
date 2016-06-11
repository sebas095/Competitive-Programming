#include <bits/stdc++.h>
#define endl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

string solve(string &s, int k) {
  string ans = "";
  for (int i = 0; i < s.size(); i++) {
    if (isalpha(s[i])) {
      if (s[i] >= 'a' and s[i] <= 'z') {
        ans += (((s[i] - 'a') + k) % 26) + 'a';
      }
      else {
        ans += (((s[i] - 'A') + k) % 26) + 'A';
      }
    }
    else ans += s[i];
  }
  return ans;
}

int main() {
  fast;
  int n, k;
  string s;
  cin >> n >> s >> k;
  cout << solve(s, k) << endl;
  return 0;
}
