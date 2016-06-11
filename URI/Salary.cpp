#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int employ, sal;
  double porc;
  cin >> employ >> sal >> porc;
  cout << "NUMBER = " << employ << endl;
  cout << "SALARY = U$ " << fixed << setprecision(2) << sal * porc << endl;
  return 0;
}
