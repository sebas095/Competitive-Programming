#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;


vector<int> segments = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int calc(int n) {
  int val = 0;
  while (n) {
    val += segments[n % 10];
    n /= 10;
  }
  return val;
}

int solve(int a, int b) {
  int ans = 0;
  for (int i = a; i <= b; i++)
    ans += calc(i);

  return ans;
}

int main() {
  fast;
  int a, b;
  cin >> a >> b;
  cout << solve(a, b) << endl;
  return 0;
}
