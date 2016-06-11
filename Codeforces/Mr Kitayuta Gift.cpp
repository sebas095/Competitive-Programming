#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

using namespace std;

bool palindrome(string s) {
  string inv = string(s.rbegin(), s.rend());
  return s == inv;
}

string solve(string &s) {
  for (int i = 0; i <= s.size(); i++) {
    for (char j = 'a'; j <= 'z'; j++) {
      string aux = s;
      aux.insert(aux.begin() + i, j);
      if (palindrome(aux))
        return aux;
    }
  }
  return "NA";
}

int main() {
  fast;
  string s;
  cin >> s;
  cout << solve(s) << endl;
  return 0;
}
