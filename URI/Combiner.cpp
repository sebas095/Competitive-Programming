#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n;
  string a, b;
  cin >> n;

  while (n--) {
    cin >> a >> b;
    int index = 0;

    for (index = 0; index < a.size(); index++) {
      if (index > b.size() - 1) {
        cout << a.substr(index);
        break;
      }
      else {
        cout << a[index] << b[index];
      }
    }

    if (index <= b.size() - 1) cout << b.substr(index);
    cout << endl;
  }

  return 0;
}
