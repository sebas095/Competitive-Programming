#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;


int memo[110][3002];
int n;

int DP(int capacity, int resistence, vector<int> &weights, vector<int> &power){
	if (capacity == n || resistence == 0) return 0;
	if (memo[capacity][resistence] != -1) return memo[capacity][resistence];

	int ans = -1;

	if (weights[capacity] > resistence)
		ans = DP(capacity + 1, resistence, weights, power);
	else {
		ans = max(DP(capacity + 1, resistence, weights, power), DP(capacity + 1, resistence - weights[capacity], weights, power) + power[capacity]);
	}

	return memo[capacity][resistence] = ans;
}

int main() {
	fast;
  int t, k, r;
  cin >> t;

  while (t--) {
    cin >> n;
    vector<int> weights(n), power(n);

    for (int i = 0; i < n; i++) {
      cin >> power[i] >> weights[i];
    }

    cin >> k >> r;
    memset(memo,-1,sizeof(memo));
    int ans = DP(0, k, weights, power);

    cout << ((ans >= r)? "Missao completada com sucesso" : "Falha na missao") << endl;
  }

	return 0;
}
