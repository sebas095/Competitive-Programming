#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, k, val;
  cin >> n;
  string members[4] = {"Rolien", "Naej", "Elehcim", "Odranoel"};

  while (n--) {
    cin >> k;
    while (k--) {
      cin >> val;
      cout << members[val - 1] << endl;
    }
  }

  return 0;
}
