#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

class Solution {
public:
  static bool isPrime(long long n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
      if (n % i == 0) return false;
    }
    return true;
  }

  static void solve(long long n) {
    if (isPrime(n)) {
      cout << "Prime" << endl;
    }
    else cout << "Not prime" << endl;
  }
};

int main() {
  // fast;
  int t;
  long long n;
  cin >> t;

  while (t--) {
    cin >> n;
    Solution::solve(n);
  }

  return 0;
}
