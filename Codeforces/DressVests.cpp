#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

void calculate(vector<pair<int, int> > &ans, int x, int y, vector<int> &a, vector<int> &b) {
    for (int i = 0, j = 0; i < a.size() && j < b.size(); ) {
      if (b[j] >= a[i] - x and b[j] <= a[i] + y) {
        ans.push_back(make_pair(i + 1, j + 1));
        i++;
        j++;
      }
      else {
        if (b[j] < a[i] - x) j++;
        else i++;
      }
    }
}

ostream& operator << (ostream& out, vector<pair<int, int> > &ans) {
  out << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++)
    out << ans[i].first << " " << ans[i].second << endl;
}

int main() {
  fast;
  int n, m, x, y;
  cin >> n >> m >> x >> y;
  vector<int> a(n), b(m);
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < m; i++) cin >> b[i];
  vector<pair<int, int> > ans;
  calculate(ans, x, y, a, b);
  cout << ans;
  return 0;
}
