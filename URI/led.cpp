#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

int led[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main() {
  fast;
  int n;
  ll ans = 0;
  string s;
  cin >> n;

  while (n--) {
    ans = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
      ans += led[s[i] - '0'];
    }

    cout << ans << " leds" << endl;
  }
  return 0;
}
