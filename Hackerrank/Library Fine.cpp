#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int curr_day, curr_month, curr_year, day, month, year;
  cin >> curr_day >> curr_month >> curr_year;
  cin >> day >> month >> year;

  if (curr_year == year) {
    if (month == curr_month) {
      if (curr_day == day or day > curr_day) {
        cout << "0" << endl;
      }
      else {
        cout << (curr_day - day) * 15 << endl;
      }
    }
    else if (month > curr_month) cout << "0" << endl;
    else {
      cout << (curr_month - month) * 500 << endl;
    }
  }
  else if (year > curr_year) cout << "0" << endl;
  else cout << 10000 << endl;

  return 0;
}
