#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int next_int() {
  string buffer;
  getline(cin, buffer);
  return atoi(buffer.c_str());
}

int solve(string &s) {
  vector<int> alp(26, 0);
  int acc = 0;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] != ' ' or s[i] != ',') {
      alp[s[i] - 'a']++;
    }
  }

  for (int i = 0; i < 26; i++) {
    if (alp[i] > 0) acc++;
  }

  if (acc == 26) return 1;
  if (acc >= 13) return 2;
  return 3;
}

int main() {
  fast;
  int t;
  string s;
  t = next_int();

  while (t--) {
    int op;
    getline(cin, s);
    op = solve(s);

    if (op == 1) {
      cout << "frase completa" << endl;
    }
    else if (op == 2) {
      cout << "frase quase completa" << endl;
    }
    else {
      cout << "frase mal elaborada" << endl;
    }
  }

  return 0;
}
