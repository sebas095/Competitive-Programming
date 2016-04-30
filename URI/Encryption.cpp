#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int next_int() {
  string buffer;
  getline(cin, buffer);
  return atoi(buffer.c_str());
}

string encryption(string &s) {
  string ans = "";
  for (int i = 0; i < s.size(); i++) {
    if (isalpha(s[i])) {
      ans += s[i] + 3;
    }
    else ans += s[i];
  }

  reverse(ans.begin(), ans.end());
  for (int i = ans.size() / 2; i < ans.size(); i++) {
    ans[i] -= 1;
  }
  return ans;
}

int main() {
  fast;
  int n;
  string s;
  n = next_int();

  while (n--) {
    getline(cin, s);
    cout << encryption(s) << endl;
  }

  return 0;
}
