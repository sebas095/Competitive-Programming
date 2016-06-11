#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

class ThePhantomMenace {
public:
  int find(vector<int> &doors, vector<int> &droids) {
    int ans = 0, mini = 0;
    vector<int> levels;

    for (int i = 0; i < doors.size(); i++) {
      mini = 1000000000;
      for (int j = 0; j < droids.size(); j++) {
        mini = min(mini, abs(doors[i] - droids[j]));
      }
      levels.push_back(mini);
    }

    for (int i = 0; i < levels.size(); i++)
      ans = max(ans, levels[i]);

    return ans;
  }
};
