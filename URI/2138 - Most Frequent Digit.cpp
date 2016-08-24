#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  string s;

  while (cin >> s) {
    vector<int> digits(10, 0);
    int ans = 0, maxi = 0;
    for (int i = 0; i < s.size(); i++)
      digits[s[i] - '0']++;

    for (int i = 0; i < 10; i++) {
      if (digits[i] >= maxi) {
        maxi = digits[i];
        ans = i;
      }
    }

    cout << ans << endl;
  }

  return 0;
}
