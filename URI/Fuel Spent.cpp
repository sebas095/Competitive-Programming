#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  double hour, vel;
  cin >> hour >> vel;
  cout << fixed << setprecision(3) << (vel / 12.0) * hour << endl;
  return 0;
}
