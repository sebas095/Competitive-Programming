#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, s;
  string inst;
  cin >> n;

  while(n--) {
    int ans = 0;
    cin >> s;
    vector<int> v(s);
    for (int i = 0; i < s; i++) cin >> v[i];
    cin >> inst;

    for (int i = 0; i < s; i++) {
      if (inst[i] == 'S' and (v[i] == 1 or v[i] == 2)) ans++;
      else if(inst[i] == 'J' and v[i] > 2)             ans++;
    }
    cout << ans << endl;
  }

  return 0;
}
