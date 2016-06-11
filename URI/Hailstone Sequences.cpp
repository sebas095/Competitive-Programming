#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int hailstone(int h) {
  int maxi = h;

  while (h > 1) {
    if (h & 1) {
      h = (3 * h) + 1;
    }
    else {
      h >>= 1;
    }
    maxi = max(maxi, h);
  }

  return maxi;
}

int main() {
  fast;
  int h;

  while (cin >> h and h) {
    cout << hailstone(h) << endl;
  }

  return 0;
}
