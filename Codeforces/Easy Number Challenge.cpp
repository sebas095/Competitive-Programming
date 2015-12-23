#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define LIMIT 1000009
#define MOD 1073741824

// http://codeforces.com/problemset/problem/236/B

using namespace std;

vector<int> divisors(LIMIT, 0);

void div() {
  for (int i = 1; i < LIMIT; i++) {
    for (int j = i; j < LIMIT; j += i)
      divisors[j]++;
  }
}

int main() {
  fast;
  div();
  int a, b, c;
  long long ans = 0;
  cin >> a >> b >> c;

  for (int i = 1; i <= a; i++)
    for (int j = 1; j <= b; j++)
      for (int k = 1; k <= c; k++)
        ans += divisors[i * j * k];

  cout << ans % MOD << endl;

  return 0;
}
