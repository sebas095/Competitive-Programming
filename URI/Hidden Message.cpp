#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define npos string::npos

using namespace std;

string message(string &s) {
  stringstream ss(s);
  string ans = "", token;

  while (ss >> token) {
    if (token.size() > 0) {
      ans += token[0];
    }
  }

  return ans;
}

int main() {
  fast;
  int t;
  string s;

  cin >> t;
  cin.ignore();

  while (t--) {
    getline(cin, s);
    cout << message(s) << endl;
  }

  return 0;
}
