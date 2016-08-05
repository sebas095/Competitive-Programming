#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int n, m;

int solve1(vector<vector<int>> &contest) {
  int ans1 = 0, ans2 = 0;

  for (int i = 0; i < n; i++) {
    int aux = count(contest[i].begin(), contest[i].end(), 1);
    ans1 += (aux < m)? 1 : 0;
    ans2 += (aux)? 1 : 0;
  }

  return (ans1 == n) + (ans2 == n);
}

int solve2(vector<vector<int>> &contest) {
  vector<int> problems(m, 0);
  int ans1 = 0, ans2 = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      problems[j] += contest[i][j];
    }
  }

  for (int i = 0; i < m; i++) {
    if (problems[i]) ans1++;
    if (problems[i] < n) ans2++;
  }

  return (ans1 == m) + (ans2 == m);
}

int main() {
  fast;
  while (cin >> n >> m and n + m) {
    vector<vector<int>> contest(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> contest[i][j];
      }
    }
    cout << solve1(contest) + solve2(contest) << endl;
  }

  return 0;
}
