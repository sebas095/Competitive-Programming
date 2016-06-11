#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

string eraseZeros(string a) {
  int index = 0;
  for (int i = 0; i < a.size(); i++) {
    if (a[i] != '0' or i == a.size() - 1) {
      index = i;
      break;
    }
  }
  return a.substr(index);
}

string solve(string &a, string &b) {
  if (a.size() > b.size()) return ">";
  else if (a.size() < b.size()) return "<";
  else {
    for (int i = 0; i < a.size(); i++) {
      if (a[i] > b[i]) return ">";
      if (a[i] < b[i]) return "<";
    }
    return "=";
  }
}

int main() {
  fast;
  string a, b;
  cin >> a >> b;

  a = eraseZeros(a);
  b = eraseZeros(b);
  cout << solve(a, b) << endl;
  return 0;
}
