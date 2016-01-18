#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

long long power(long long base, long long ex) {
  long long ans = 1;
  for (long long i = 0; i < ex; i++)
    ans *= base;
  return ans;
}

int main() {
  fast;
  long long r;
  cin >> r;

  cout << power(3, r) << endl;
  return 0;
}
