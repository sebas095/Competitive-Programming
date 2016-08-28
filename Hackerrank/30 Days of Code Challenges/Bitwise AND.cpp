#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t, n, k;
  cin >> t;

  while (t--) {
    int maxi = 0;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i< n; i++) v[i] = i + 1;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if ((v[i] & v[j]) > maxi and (v[i] & v[j]) < k) {
          maxi = (v[i] & v[j]);
        }
      }
    }
    cout << maxi << endl;
  }

  return 0;
}
