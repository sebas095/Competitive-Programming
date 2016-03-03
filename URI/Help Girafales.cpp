#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

bool dif(string &a, string &b) {
  int ans = 0;
  for (int i = 0; i < a.size(); i++) {
    if (a[i] != b[i]) ans++;
  }
  return ans <= 1;
}

int main() {
  fast;
  string a, b;
  int n, m;

  while (cin >> n and n) {
    int ans = 0;
    map<string, string> names;

    while (n--) {
      cin >> a >> b;
      names[a] = b;
    }

    cin >> m;
    while (m--) {
      cin >> a >> b;
      if (!dif(names[a], b)) ans++;
    }

    cout << ans << endl;
  }

  return 0;
}
