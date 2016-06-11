#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int toInt(string s) {
  return atoi(s.c_str());
}

int main() {
  fast;
  string clk1, clk2, format;
  cin >> clk1;
  format = clk1.substr(8);
  clk2 = clk1.substr(0, 8);

  if (format == "AM") {
    if (clk2.substr(0, 2) == "12") {
      clk2[0] = clk2[1] = '0';
    }
    cout << clk2 << endl;
  }
  else {
    if (clk2.substr(0, 2) == "12") {
      cout << clk2 << endl;
    }
    else {
      cout << toInt(clk2.substr(0, 2)) + 12 << clk2.substr(2) << endl;
    }
  }
  return 0;
}
