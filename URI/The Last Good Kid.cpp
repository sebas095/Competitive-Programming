#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

void upperCase(string &s) {
  transform(s.begin(), s.end(), s.begin(), ::toupper);
}

int main() {
  fast;
  string s;
  map<string, string> names;

  while (getline(cin, s)) {
    string ss = s;
    upperCase(s);
    names[s] = ss;
  }

  cout << (*names.rbegin()).second << endl; 
  return 0;
}
