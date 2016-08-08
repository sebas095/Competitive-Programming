#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define npos string::npos

using namespace std;

int next_int() {
  string buffer;
  getline(cin, buffer);
  return atoi(buffer.c_str());
}

string solve(string &s) {
  int index = 0;
  string name = "oulupukk";

  while (true) {
    int pos = s.find(name, index);
    if (pos == npos) break;
    s[pos - 1] = 'J';
    s[pos + 8] = 'i';
    index++;
  }

  return s;
}

int main() {
  fast;
  int n;
  string s;
  n = next_int();

  while(n--) {
    getline(cin, s);
    cout << solve(s) << endl;
  }

  return 0;
}
