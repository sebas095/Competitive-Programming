#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, s, seconds = 0, top;
  cin >> n >> s;
  top = s;
  vector<pair<int, int> > elevator(n);
  for (int i = 0; i < n; i++) cin >> elevator[i].first >> elevator[i].second;

  sort(elevator.rbegin(), elevator.rend());
  for (int i = 0; i < n; i++) {
    seconds += top - elevator[i].first;
    top = elevator[i].first;
    if (seconds < elevator[i].second)
      seconds += elevator[i].second - seconds;
  }

  seconds += top;
  cout << seconds << endl;
  return 0;
}
