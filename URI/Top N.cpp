#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int solve(int n) {
  if (n == 1) return 1;
  if (n >= 2 and n <= 3) return 3;
  if (n >= 4 and n <= 5) return 5;
  if (n >= 6 and n <= 10) return 10;
  if (n >= 11 and n <= 25) return 25;
  if (n >= 26 and n <= 50) return 50;
  if (n >= 51 and n <= 100) return 100;
}

int main() {
  fast;
  int n;
  cin >> n;
  cout << "Top " << solve(n) << endl;
  return 0;
}
