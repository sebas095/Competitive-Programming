#include <bits/stdc++.h>
#define endl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

typedef long long int ll;

bool is_variant(char c) {
  c = tolower(c);
  return (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 's');
}

int main() {
  fast;
  int t;
  string s;
  cin >> t;

  while (t--) {
    ll ans = 1;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
      if (is_variant(s[i])) ans *= 3;
      else                  ans *= 2;
    }
    cout << ans << endl;
  }

  return 0;
}
