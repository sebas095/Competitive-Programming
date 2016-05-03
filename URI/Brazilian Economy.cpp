#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, vi;
  cin >> n;
  vector<int> v(2, 0);

  while (n--) {
    cin >> vi;
    v[vi]++;
  }

  cout << ((v[0] > v[1])? 'Y' : 'N') << endl;
  return 0;
}
