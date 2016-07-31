#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n;
  bool ok = true;
  cin >> n;
  vector<int> v(n);
  string s = "#";
  char prev;

  for (int i = 0; i < n; i++) cin >> v[i];
  for (int i = 1; i < n; i++) {
    if (v[i - 1] < v[i]) s += '-';
    else if (v[i - 1] > v[i]) s += '+';
    else s += '*';
  }

  prev = s[1];
  if (n == 2 and prev == '*') ok = false;
  for (int i = 2; i < n; i++) {
    if (s[i] == prev or s[i] == '*') {
      ok = false;
      break;
    }
    else prev = s[i];
  }

  cout << ok << endl;
  return 0;
}
