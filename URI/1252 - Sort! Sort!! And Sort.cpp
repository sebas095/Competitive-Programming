#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int m;

bool solve(int a, int b) {
  if (a % m == b % m) {
    if (a & 1) {
      if (b & 1) {
        return a > b;
      }
      return true;
    }
    else {
      if (b & 1) {
        return false;
      }
      else {
        return a < b;
      }
    }
  }
  return (a % m) < (b % m);
}

int main() {
  fast;
  int n;

  while (cin >> n >> m and n + m) {
    cout << n << " " << m << endl;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
      cin >> v[i];

    sort(v.begin(), v.end(), solve);
    for (int i = 0; i < n; i++)
      cout << v[i] << endl;
  }

  cout << "0 0" << endl;
  return 0;
}
