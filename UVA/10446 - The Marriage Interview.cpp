#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef unsigned long long ull;

ull memo[62][62] = {0};

ull trib(int n, int back) {
  if (n <= 1) return 1;
  if (memo[n][back] != 0) return memo[n][back];

  memo[n][back] = 1;
  for (int i = 1; i <= back; i++) {
    memo[n][back] += trib(n - i, back);
  }
  return memo[n][back];
}

int main() {
  fast;
  int nc = 1, n, back;

  while (cin >> n >> back and n <= 60) {
    cout << "Case " << nc << ": " << trib(n, back) << endl;
    nc++;
  }

  return 0;
}
