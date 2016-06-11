#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int age, year, month, day;
  cin >> age;

  year = age / 365;
  month = (age % 365) / 30;
  day = (age % 365) % 30;

  cout << year << " ano(s)" << endl;
  cout << month << " mes(es)" << endl;
  cout << day << " dia(s)" << endl;

  return 0;
}
