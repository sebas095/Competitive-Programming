#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

bool solve(int n) {
  int i = 0, j = sqrt(n), val;

  while (j >= i) {
    val = (i * i) + (j * j);
    if (val == n) return true;
    else if (val < n) i++;
    else j--;
  }

  return false;
}

int main() {
  fast;
  int n;

  while (cin >> n) {
    cout << (solve(n)? "YES" : "NO") << endl;
  }

  return 0;
}
