#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

long double to_double(string &s) {
  stringstream ss(s);
  long double ans;
  ss >> ans;
  return ans;
}

int main() {
  fast;
  bool ok = false;
  int cont = 0, cont2 = 0;
  string s1, s2, id, a, b;
  cout << fixed;
  cout.precision(2);

  getline(cin, s1);
  getline(cin, s2);

  for (int i = 0; i < s1.size(); i++) {
    if (isdigit(s1[i]) and cont <= 10) {
      id += s1[i];
      cont++;
    }
    else {
      if (isdigit(s1[i]) and cont2 < 2) {
        a += s1[i];
        if (ok) cont2++;
      }
      else if (s1[i] == '.' and !ok) {
        a += s1[i];
        ok = true;
      }
    }
  }

  cont2 = 0;
  ok = false;
  for (int i = 0; i < s2.size(); i++) {
    if (isdigit(s2[i]) and cont2 < 2) {
      b += s2[i];
      if (ok) cont2++;
    }
    else if (s2[i] == '.' and !ok) {
      b += s2[i];
      ok = true;
    }
  }

  cout << "cpf " << id << endl;
  cout << to_double(a) + to_double(b) << endl;
  return 0;
}
