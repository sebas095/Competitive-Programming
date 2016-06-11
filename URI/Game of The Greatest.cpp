#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, a, b;

  while (cin >> n and n) {
    int p1 = 0, p2 = 0;
    while (n--) {
      cin >> a >> b;
      if (a > b)      p1++;
      else if (b > a) p2++;
    }
    cout << p1 << " " << p2 << endl;
  }

  return 0;
}
