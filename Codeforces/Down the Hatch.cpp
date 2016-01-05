#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, cont = 0;
  string s;
  cin >> n >> s;
  for (int i = n; i < s.size(); i += n)
    if (s[i - 1] == s[i - 2] and s[i -2] == s[i -3])
      cont++;

  cout << cont << endl;
  return 0;
}
