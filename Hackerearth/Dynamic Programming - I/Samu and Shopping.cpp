#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define MIN(a, b, c) min(a, min(b, c))
#define oo INT_MAX

using namespace std;

int memo[100005][4];
int n;

// Recursivo
int DP(int index, int prev, vector <vector<int> > &cost) {
  if (index >= n) return 0;
  if (memo[index][prev] != -1) return memo[index][prev];
  int ans = oo;

  for (int i = 1; i <= 3; i++)
    if (i != prev)
      ans = min(ans, DP(index + 1, i, cost) + cost[index][i]);

  return memo[index][prev] = ans;
}

// Iterativo
int DP2(vector <vector<int> > &cost, int n) {
  vector <vector<int> > memo(n, vector<int>(3));

  for (int i = 0; i < 3; i++)
    memo[0][i] = cost[0][i];

  for (int i = 1; i < n; i++) {
    memo[i][0] = min(memo[i - 1][1], memo[i - 1][2]) + cost[i][0];
    memo[i][1] = min(memo[i - 1][0], memo[i - 1][2]) + cost[i][1];
    memo[i][2] = min(memo[i - 1][0], memo[i - 1][1]) + cost[i][2];
  }

  return MIN(memo[n - 1][0], memo[n - 1][1], memo[n - 1][2]);
}

int main() {
  fast;
  int t;
  cin >> t;

  while (t--) {
    cin >> n;
    vector <vector<int> > cost(n, vector<int>(4, oo));
    memset(memo, -1, sizeof(memo));

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < 3; j++)
        cin >> cost[i][j + 1];
    }

    // cout << DP2(cost, n) << endl;
    cout << DP(0, 0, cost) << endl;
  }
  return 0;
}
