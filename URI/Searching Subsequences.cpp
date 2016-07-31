#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define npos string::npos

using namespace std;

int solve(string &a, string &b, set<int> &count) {
  int index = 0, pos = -1;
  while (index < b.size()) {
    int match = b.find(a, index);
    if (match != npos) {
      pos = match;
      index += a.size();
      count.insert(pos);
    }
    else index++;
  }
  return pos;
}

int main() {
  fast;
  int nc = 1;
  string a, b;

  while (cin >> a >> b) {
    set<int> count;
    int pos = solve(a, b, count);
    cout << "Caso #" << nc++ << ":" << endl;

    if (pos != -1) {
      cout << "Qtd.Subsequencias: " << count.size() << endl;
      cout << "Pos: " << pos + 1 << endl;
    }
    else cout << "Nao existe subsequencia" << endl;
    cout << endl;
  }

  return 0;
}
