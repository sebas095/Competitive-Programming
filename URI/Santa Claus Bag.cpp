#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define MP make_pair
#define ff first
#define ss second

using namespace std;

typedef long long ll;
typedef pair<int, ll> PIL;
typedef pair<PIL, int> terna;

int n;
terna memo[110][55];
bool vi[110][55];

terna DP(int index, int capacity, vector<int> &weights, vector<int> &prices) {
  if(index == n) return MP(MP(0, 0), capacity);
  if (vi[index][capacity]) return memo[index][capacity];

  vi[index][capacity] = true;
  terna ans1 = DP(index + 1, capacity, weights, prices);

  if (weights[index] <= capacity) {
    terna ans2 = DP(index + 1, capacity - weights[index], weights, prices);
    ans2.ff.ff += prices[index];
    ans2.ff.ss += 1;
    ans1 = max(ans1, ans2);
  }

  return memo[index][capacity] = ans1;
}

int main() {
  fast;
  int t;
  cin >> t;

  while (t--) {
    cin >> n;
    memset(vi, false, sizeof(vi));
    vector<int> weights(n), prices(n);

    for(int i = 0; i < n; i++)
      cin >> prices[i] >> weights[i];

    terna ans = DP(0, 50, weights, prices);
    cout << ans.ff.ff << " brinquedos" << endl;
    cout << "Peso: " << 50 - ans.ss << " kg" << endl;
    cout << "sobra(m) " << n - ans.ff.ss << " pacote(s)" << endl << endl;
  }
  return 0;
}
