#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

ostream& operator << (ostream& out, vector<int> &v) {
  for (int i = 0; i < v.size(); i++) {
    if (i) out << " ";
    out << v[i];
  }
  return out;
}

int main() {
  fast;
  int n, k;
  cin >> n >> k;
  vector<int> ans(2 * n + 1);

  for (int i = 0; i < ans.size(); i++) cin >> ans[i];
  for (int i = 1; i < ans.size()-1; i++) {
    if (k) {
        if ((ans[i] - 1) > ans[i - 1] and (ans[i] - 1) > ans[i + 1]) {
          ans[i]--;
          k--;
        }
    }
    else break;
  }
  cout << ans << endl;
  return 0;
}
