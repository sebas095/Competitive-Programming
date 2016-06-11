#include <iostream>

using namespace std;



int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, a[111];
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];

  long long ans = 0;

  for (int i = 0; i < n; i++) {
    ans += a[i] + (long long)(a[i]-1) * i;
  }

  cout << ans << endl;

  return 0;
}