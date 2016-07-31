#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  string s;
  getline(cin, s);
  cout << ((s.size() <= 80)? "YES" : "NO") << endl;
  return 0;
}
