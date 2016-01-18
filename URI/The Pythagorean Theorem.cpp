#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

bool pytagorica (int &a, int &b, int &c) {
  return ((a * a) == ((b * b) + (c * c)) or (b * b) == ((a * a) + (c * c)) or (c * c) == ((b * b) + (a * a)));
}

int main() {
  fast;
  int x, y, z;
  
  while (cin >> x >> y >> z) {
    if (pytagorica(x, y, z)) {
      if (__gcd(x, __gcd(y, z)) == 1)
        cout << "tripla pitagorica primitiva" << endl;
      else cout << "tripla pitagorica" << endl;
    }
    else cout << "tripla" << endl;
  }
  return 0;
}
