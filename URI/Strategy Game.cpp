#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int J, R, val, maxi = -1, index = 0;
  cin >> J >> R;
  vector<int> v(J);

  for (int i = 0; i < R; i++) {
    for (int j = 0; j < J; j++) {
      cin >> val;
      v[j] += val;
    }
  }

  for (int i = J - 1; i >= 0; i--) {
    if (v[i] > maxi) {
      maxi = v[i];
      index = i;
    }
  }

  cout << index + 1 << endl;
  return 0;
}
