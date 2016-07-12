#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

long double to_double(string &s) {
  stringstream ss(s);
  long double n;
  ss >> n;
  return n;
}

int main() {
  fast;
  string s;
  cout << fixed;
  cout.precision(6);

  while (cin >> s and s != "0") {
    if (s.size() > 18) cout << "1.000000" << endl;
    else {
      cout << (1.0 - (3.0 / to_double(s))) << endl;
    }
  }

  return 0;
}
