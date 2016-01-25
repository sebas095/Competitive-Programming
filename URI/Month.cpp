#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int m;
  map<int, string> month;
  month[1] = "January"; month[2] = "February"; month[3] = "March"; month[4] = "April";
  month[5] = "May"; month[6] = "June"; month[7] = "July"; month[8] = "August";
  month[9] = "September"; month[10] = "October"; month[11] = "November"; month[12] = "December";

  cin >> m;
  cout << month[m] << endl;

  return 0;
}
