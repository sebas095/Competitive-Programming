#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int numDiv(long long &n) {
  int ans = 0;
  for (long long i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      if ((n / i) == i) ans++;
      else ans += 2;
    }
  }
  return ans;
}

int main() {
  fast;
  int t;
  long long n;
  cin >> t;

  while (t--) {
    cin >> n;
    cout << numDiv(n) << endl;
  }
  return 0;
}
