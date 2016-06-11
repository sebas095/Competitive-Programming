#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

vector<bool> criba(1010, true);
vector<int> primes;

void sieve() {
    criba[0] = criba[1] = false;

  for (int i = 2; i < criba.size(); i++) {
    if (criba[i]) {
      primes.push_back(i);
      for (int j = i + i; j < criba.size(); j += i) {
        criba[j] = false;
      }
    }
  }
}

void solve(int n) {
  vector<int> ans(3);
  bool flag = false, ok = false;

  for (int i = 0; i < primes.size(); i++) {
    if (flag) break;
    for (int j = 0; j < primes.size(); j++) {
      int tmp = primes[i] + primes[j];
      if (n - tmp > 1 and criba[n - tmp]) {
        ans[0] = primes[i];
        ans[1] = primes[j];
        ans[2] = n - tmp;
        flag = true;
        ok = true;
        break;  
      }
    }
  }

  if (ok) {
    sort(ans.begin(), ans.end());
    cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
  }
  else cout << "0" << endl;
}

int main() {
  fast;
  sieve();
  int tc, n;
  cin >> tc;

  while (tc--) {
    cin >> n;
    solve(n);
  }

  return 0;
}
