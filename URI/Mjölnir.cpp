#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t, n;
  string s;
  cin >> t;

  while (t--) {
    cin >> s >> n;
    cout << ((s == "Thor")? 'Y' : 'N') << endl;
  }

  return 0;
}
