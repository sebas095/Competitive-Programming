#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define PI 3.14159

using namespace std;
typedef long long ll;

int main() {
  fast;
  ll r;
  cin >> r;
  r = r * r * r;
  cout << "VOLUME = " << fixed << setprecision(3) << r * PI * (4/3.0) << endl;
  return 0;
}
