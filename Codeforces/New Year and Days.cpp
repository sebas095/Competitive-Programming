#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define npos string::npos

using namespace std;

int main() {
  fast;
  int n;
  string s;
  getline(cin, s);
  stringstream ss(s);
  ss >> n;

  if (s.find("week") != npos) {
    if (n != 5 and n != 6)
      cout << 52 << endl;
    else
      cout << 53 << endl;
  }
  else {
    if (n <= 29)
      cout << 12 << endl;
    else if (n == 30)
      cout << 11 << endl;
    else if(n == 31)
      cout << 7 << endl;
  }
  return 0;
}
