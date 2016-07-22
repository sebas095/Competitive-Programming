#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  string trace;
  int procs;

  while (cin >> trace >> procs) {
    int ans = 0, reads = 0;
    for (int i = 0; i < trace.size(); i++) {
      if (trace[i] == 'R') reads++;
      else {
        ans++;
        ans += ceil(reads / (double)procs);
        reads = 0;
      }
    }
    ans += ceil(reads / (double)procs);
    cout << ans << endl;
  }

  return 0;
}
