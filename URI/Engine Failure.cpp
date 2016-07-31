#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, index = 0;
  cin >> n;
  vector<int> speed(n);
  for (int i = 0; i < n; i++) cin >> speed[i];
  for (int i = 1; i < n; i++) {
    if (speed[i] < speed[i - 1]) {
      index = i + 1;
      break;
    }
  }
  cout << index << endl;
  return 0;
}
