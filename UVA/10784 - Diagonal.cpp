#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

// https://uva.onlinejudge.org/index.php?option=onlinejudge&Itemid=99999999&page=show_problem&category=&problem=1725&mosmsg=Submission+received+with+ID+16638661

using namespace std;

int main() {
  fast;
  double n;
  int nc = 0;
  while (cin >> n && n > 0.0) {
    nc++;
    double ans = (3 + sqrt(9 + 8 * n)) / 2;
    cout << "Case " << nc << ": " << fixed << (long long)ceil(ans) << endl;
  }
  return 0;
}
