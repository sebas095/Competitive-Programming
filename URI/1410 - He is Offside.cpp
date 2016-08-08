#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int a, d;

  while (cin >> a >> d and a + d) {
    vector<int> team1(a), team2(d);

    for (int i = 0; i < a; i++) cin >> team1[i];
    for (int i = 0; i < d; i++) cin >> team2[i];

    sort(team1.begin(), team1.end());
    sort(team2.begin(), team2.end());

    cout << ((team1[0] < team2[1])? 'Y' : 'N') << endl;
  }

  return 0;
}
