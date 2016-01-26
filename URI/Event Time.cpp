#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int toInt(string s) {
  return atoi(s.c_str());
}

void date(string s1, string s2, int &d, int &h, int &m, int &s) {
  d = toInt(s1.substr(4));
  h = toInt(s2.substr(0, 2));
  m = toInt(s2.substr(5, 2));
  s = toInt(s2.substr(10, 2));
}

int main() {
  fast;
  int d1, d2, h1, h2, m1, m2, s1, s2, aux1, aux2, aux3;
  int ans1, ans2, ans3, ans4;
  string ss1, ss2, s3, s4;
  getline(cin, ss1);
  getline(cin, ss2);
  getline(cin, s3);
  getline(cin, s4);

  date(ss1, ss2, d1, h1, m1, s1);
  date(s3, s4, d2, h2, m2, s2);
  d1++; d2--;

  ans1 = d2 - d1 + 1;
  ans2 = (24 - (h1 + 1)) + h2;
  ans3 = (60 - (m1 + 1)) + m2;
  ans4 = 60 - s1  + s2;

  if (ans2 >= 24) {
    ans1 += ans2 / 24;
    ans2 %= 24;
  }

  if (ans3 >= 60) {
    ans2 += ans3 / 60;
    ans3 %= 60;
  }

  if (ans4 >= 60) {
    ans3 += ans4 / 60;
    ans4 %= 60;
  }

  aux1 = ans4 / 60;
  ans4 %= 60;

  ans3 += aux1;
  aux2 = ans3 / 60;
  ans3 %= 60 ;

  ans2 += aux2;
  aux3 = ans2 / 24;
  ans2 %= 24;
  ans1 += aux3;

  cout << ans1 << " dia(s)" << endl;
  cout << ans2 << " hora(s)" << endl;
  cout << ans3 << " minuto(s)" << endl;
  cout << ans4 << " segundo(s)" << endl;

  return 0;
}
