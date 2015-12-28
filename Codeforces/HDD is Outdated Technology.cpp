#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  long long n,ans = 0, f;
  cin >> n;
  vector<pair<long long, long long> > HDD(n);

  for (int i = 0; i < n; i++) {
     cin >> f;
     HDD[i] = make_pair(f, i);
  }

  sort(HDD.begin(), HDD.end());
  for (int i = 1; i < n; i++) {
    ans += abs(HDD[i].second - HDD[i - 1].second);
  }
  cout << ans << endl;
  return 0;
}
