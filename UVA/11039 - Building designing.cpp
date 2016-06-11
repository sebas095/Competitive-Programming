#include <bits/stdc++.h>
#define MP make_pair
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define MP make_pair
#define ff first
#define ss second

using namespace std;
typedef pair<int, bool> PIB;

int main() {
  int t, n, prev_valid, floors;
  cin >> t;

  while (t--) {
    cin >> n;
    vector <PIB> colors(n);

    for (int i = 0; i < n; i++) {
      cin >> floors;
      colors[i] = MP(abs(floors), (floors > 0));
    }

    sort(colors.rbegin(), colors.rend());
    prev_valid = colors[0].second;
    int ans = 1;

    for (int i = 1; i < n; i++) {
      if (colors[i].ss != prev_valid) {
        ans++;
        prev_valid = colors[i].second;
      }
    }
    cout << ans << endl;
  }

  return 0;
}
