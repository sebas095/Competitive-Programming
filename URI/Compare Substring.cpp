#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int lcs(string &a, string &b) {
  int ans = 0, count = 0;

  for (int i = 0; i < a.size(); i++) {
    for (int j = 0; j < b.size(); j++) {
      if (a[i] == b[j]) {
        count = 0;
        for (int k = 0; (j + k) < b.size(); k++) {
          if ((i + k) < a.size() and a[i + k] == b[j + k]) count++;
          else break;
        }
        ans = max(ans, count);
      }
    }
  }

  return ans;
}

int main() {
  fast;
  string a, b;
  while (getline(cin, a) and getline(cin, b)) {
    cout << lcs(a, b) << endl;
  }
  return 0;
}
