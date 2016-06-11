#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n;
  double x;
  cin >> n;

  while (n--) {
    cin >> x;
    cout << ceil(log2(x)) << " dias" << endl;
  }

  return 0;
}
