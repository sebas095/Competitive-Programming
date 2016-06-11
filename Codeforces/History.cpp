#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define MP make_pair
#define ff first
#define ss second

using namespace std;

typedef pair<int, int> PII;

int main() {
  fast;
  int n, maxi = 0, ans = 0;
  cin >> n;
  vector<PII> events(n);

  for (int i = 0; i < n; i++)
    cin >> events[i].ff >> events[i].ss;

  sort(events.begin(), events.end());
  for (int i = 0; i < n; i++) {
    if (events[i].ss > maxi) {
      maxi = events[i].ss;
    }
    else ans++;
  }

  cout << ans << endl;
  return 0;
}
