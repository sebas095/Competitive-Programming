#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

long double to_double(string &s) {
  stringstream ss(s);
  long double n;
  ss >> n;
  return 1.0 - n;
}

int main() {
  fast;
  long double num, cutoff;
  string s;

  while (cin >> num) {
    long long ans;
    cin >> s;
    cutoff = to_double(s);

    for (int i = 0; i < s.size() - 2; i++) {
      num *= 10;
      cutoff *= 10;
    }

    ans = num + cutoff;
    for (int i = 0; i < s.size() - 2; i++) ans /= 10;
    cout << ans << endl;
  }

  return 0;
}
