#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  double a, b;
  cin >> a >> b;
  cout << "MEDIA = " << fixed << setprecision(5) << ((a * 3.5) + (b * 7.5)) / 11.0 << endl;
  return 0;
}
