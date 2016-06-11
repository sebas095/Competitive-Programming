#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int N, M, ans = 0;
  cin >> N >> M;
  vector<int> a(N);

  for (int i = 0; i < N; i++) cin >> a[i];
  sort(a.begin(), a.end(), greater<int>());

  for (int i = 0; i < N; i++) {
    M -= a[i];
    ans++;
    if (M <= 0) break;
  }

  cout << ans << endl;
  return 0;
}
