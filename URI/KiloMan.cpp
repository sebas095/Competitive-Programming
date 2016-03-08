#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int solve(vector<int> &patterns, string &jumps) {
  int ans = 0;

  for (int i = 0; i < patterns.size(); i++) {
    if ((patterns[i] == 1 or patterns[i] == 2) and jumps[i] == 'S') ans++;
    else if (patterns[i] > 2 and jumps[i] == 'J')                   ans++;
  }

  return ans;
}

int main() {
  fast;
  int tc, s;
  cin >> tc;

  while (tc--) {
    cin >> s;
    string jumps;
    vector<int> patterns(s);

    for (int i = 0; i < s; i++) cin >> patterns[i];
    cin >> jumps;

    cout << solve(patterns, jumps) << endl;
  }

  return 0;
}
