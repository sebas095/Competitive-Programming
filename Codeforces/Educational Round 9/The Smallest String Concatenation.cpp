#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

bool cmp(string a, string b) {
  return a + b < b + a;
}

int main() {
  fast;
  int n;
  cin >> n;
  vector<string> s(n);

  for (int i = 0; i < s.size(); i++) cin >> s[i];
  sort(s.begin(), s.end(), cmp);
  for (int i = 0; i < s.size(); i++) cout << s[i];
  cout << endl;

  return 0;
}
