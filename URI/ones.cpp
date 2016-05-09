#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  long N, num, ones, K;

  while (cin >> num) {
    N = ones = K = 1;

    while (K) {
      if (N < num ) {
        N = (N * 10 ) + 1;
        ones++;
      }

      K = N % num;
      N = K;
    }

    cout << ones << endl;
  }

  return 0;
}
