#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int next_int() {
  string buffer;
  getline(cin, buffer);
  return atoi(buffer.c_str());
}

int main() {
  fast;
  int n, nc = 0;
  string s;
  n = next_int();
  cout << fixed;
  cout.precision(4);

  while (n--) {
    int cont = 0;
    if (!nc) getline(cin, s);
    if (nc) cout << endl;
    nc++;
    map<string, int> names;
    while (getline(cin, s) and s.size()) {
      names[s]++;
      cont++;
    }

    for (auto &it : names) {
      cout << it.first << " " << (double)(it.second / (double)cont) * 100.0 << endl;
    }
  }

  return 0;
}
