#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

// https://www.urionlinejudge.com.br/judge/en/problems/view/1307

using namespace std;

typedef unsigned long long ull;

int main() {
  fast;
  int n, nc = 1;
  string s1, s2;
  cin >> n;

  while (n--) {
    ull a, b;
    cin >> s1 >> s2;
    a = bitset<30>(string(s1)).to_ulong();
    b = bitset<30>(string(s2)).to_ulong();
    cout << "Pair #" << nc++ << ": ";

    if (__gcd(a, b) != 1) {
      cout << "All you need is love!" << endl;
    }
    else cout << "Love is not all you need!" << endl;
  }

  return 0;
}
