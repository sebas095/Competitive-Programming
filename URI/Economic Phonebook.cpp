#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;
typedef long long ll;

int main() {
  fast;
  int n;

  while (cin >> n) {
    vector<string> numbers(n);
    ll ans = 0;

    for (int i = 0; i < n; i++) cin >> numbers[i];
    sort(numbers.begin(), numbers.end());

    for (int i = 1; i < n; i++) {
      for (int j = 0; j < numbers[i].size(); j++) {
        if (numbers[i][j] != numbers[i - 1][j]) break;
        ans++;
      }
    }

    cout << ans << endl;
  }

  return 0;
}
