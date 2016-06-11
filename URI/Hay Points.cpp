#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

void split(map<string, ll> &price, string &m) {
  stringstream ss(m);
  ll value;
  string key;
  ss >> key >> value;
  price[key] = value;
}

int main() {
  fast;
  int m, n;
  string s;
  ll ans = 0;
  map<string, ll> price;

  getline(cin, s);
  stringstream ss(s);
  ss >> m >> n;

  while (m--) {
    getline(cin, s);
    split(price, s);
  }

  for (int i = 0; i < n; i++) {
    ans = 0; string tmp, s;
    while(getline(cin, tmp) and tmp != ".") {
      stringstream ss(tmp);
      while(ss >> s) {
        if (price.count(s)) {
          ans += price[s];
        }
      }
    }
    cout << ans << endl;
  }

  return 0;
}
