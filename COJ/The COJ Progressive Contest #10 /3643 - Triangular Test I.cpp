#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define oo 1000000

using namespace std;

const int MAXN = 1e+7 + 5;
int memo[MAXN], triangulars[MAXN], n;

void DP() {
  int index = 0;
  memset(memo, oo, sizeof(memo));
  memo[0] = 0;

  for (int i = 1, x = 1; x <= MAXN; i++, x += i) triangulars[index++] = x;
  for (int i = 0; i < index; i++) memo[triangulars[i]] = 1;
  for (int i = 0; i < index; i++) {
    for (int j = i; j < index and (triangulars[i] + triangulars[j]) <= MAXN; j++) {
      memo[triangulars[i] + triangulars[j]] = min(memo[triangulars[i] + triangulars[j]], 2);
    }
  }
}

int main() {
  fast;
  DP();

  while (cin >> n) {
    cout << ((memo[n] <= 2)? memo[n] : 3) << endl;
  }

  return 0;
}
