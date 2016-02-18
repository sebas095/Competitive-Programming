#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n = 4;
  vector<string> matring(n);
  int f, l;
  string ans = "", tmp = "", tmp2 = "";

  for (int i = 0; i < n; i++) cin >> matring[i];

  for (int i = 0; i < n; i++) {
    tmp += matring[i][0];
    tmp2 += matring[i][matring[0].size() - 1];
  }

  f = atoi(tmp.c_str());
  l = atoi(tmp2.c_str());

  for (int i = 1; i < matring[0].size() - 1; i++) {
    string aux = "";
    int val = 0;
    for (int j = 0; j < n; j++) {
      aux += matring[j][i];
    }
    val = atoi(aux.c_str());
    ans += (char)((f * val + l) % 257);
  }

  cout << ans << endl;

  return 0;
}