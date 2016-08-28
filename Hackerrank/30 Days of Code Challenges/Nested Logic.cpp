#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

class Solution {
private:
  int curr_day, curr_month, curr_year;
  int day, month, year, fine;

public:
  Solution(int cd, int cm, int cy, int d, int m, int y) {
    curr_day = cd;
    curr_month = cm;
    curr_year = cy;
    day = d;
    month = m;
    year = y;
  }

  int libraryFine() {
    if (curr_year == year) {
      if (month == curr_month) {
        if (curr_day == day or day > curr_day)
          return 0;
        else {
          return (curr_day - day) * 15;
        }
      }
      else if (month > curr_month) return 0;
      else {
        return (curr_month - month) * 500;
      }
    }
    else if (year > curr_year) return 0;
    else return 10000;
  }
};

int main() {
  fast;
  int curr_day, curr_month, curr_year, day, month, year;
  cin >> curr_day >> curr_month >> curr_year;
  cin >> day >> month >> year;

  Solution solve(curr_day, curr_month, curr_year, day, month, year);
  cout << solve.libraryFine() << endl;

  return 0;
}
