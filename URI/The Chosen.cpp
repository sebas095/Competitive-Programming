#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, student, ans = 0;
  double cal, note = 0.0;
  cin >> n;

  while (n--) {
    cin >> student >> cal;
    if (cal > note) {
      ans = student;
      note = cal;
    }
  }

  if (note >= 8.0) cout << ans << endl;
  else cout << "Minimum note not reached" << endl;
  return 0;
}
