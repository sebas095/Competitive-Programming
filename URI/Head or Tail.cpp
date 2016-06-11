#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, player;

  while (cin >> n and n) {
    vector<int> winners(2, 0);
    for (int i = 0; i < n; i++) {
      cin >> player;
      winners[player]++;
    }
    cout << "Mary won " << winners[0] << " times and John won " << winners[1] << " times" << endl;
  }

  return 0;
}
