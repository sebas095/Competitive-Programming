#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n;
  cin >> n;
  if (n & 1 or n == 2 or n == 4)
    cout << "0" << endl;
  else {
    n = ((n >> 1) - 1) >> 1;
    cout << n << endl;
  }
  return 0;
}
