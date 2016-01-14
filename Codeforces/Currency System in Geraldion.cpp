#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, num;
  bool ans = true;
  cin >> n;

  while (n--) {
    cin >> num;
    if (num == 1) ans = false;
  }

  cout << ((ans)? "1" : "-1") << endl;
  return 0;
}
