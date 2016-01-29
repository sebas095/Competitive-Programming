#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, start;
  cin >> n;
  start = floor(log(n) / log(2)) + 1;

  if (start == n) cout << n << endl;
  else {
    vector<int> v(start);
    for (int i = 0; i < start; i++) v[i] = i + 1;
    int init = n;
    for (int j = v.size(); j >= 0; j--) {
      if ((init & (1 << j)) != 0) cout << v[j] << " ";
    }
    cout << endl;
  }
  return 0;
}
