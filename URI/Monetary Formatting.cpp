#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

string solve(int dollars, int cents) {
  string r;
  int count = 0;
  string centVal;
  int digit = 0;

  while(dollars > 9) {
    digit = dollars % 10;
    r += ((char)(48 + digit));
    dollars /= 10;
    count++;
    if(count % 3 == 0) r += ",";
  }

  r += char(48 + dollars);
  r += "$";
  r = string(r.rbegin(), r.rend());

  if(cents == 0) {
    centVal += ".00";
    return r + centVal;
  }

  if(cents < 10) {
    centVal = ".0";
    centVal += char(48 + cents);
    return r + centVal;
  }
  stringstream ss;
  ss << cents;
  return r + "." + ss.str();
}

int main() {
  fast;
  int d, c;

  while (cin >> d >> c) {
    cout << solve(d, c) << endl;
  }

  return 0;
}
