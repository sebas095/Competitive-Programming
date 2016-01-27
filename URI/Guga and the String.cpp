#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define npos string::npos

using namespace std;

int main() {
  fast;
  string let = "aeiou";
  int t, q, a, b, nc = 1, ans1 = 0, ans2 = 0;
  string s;
  cin >> t;

  while (t--) {
    cin >> s >> q;
    ans1 = ans2 = 0;
    vector<char> vocales, consonantes;
    vector<int> pos(s.size());

    for (int i = 0; i < s.size(); i++) {
        if (let.find(s[i]) != npos) {
          pos[i] = vocales.size();
          vocales.push_back(s[i]);
        }
        else {
          pos[i] = consonantes.size();
          consonantes.push_back(s[i]);
        }
    }

    cout << "Caso #" << nc << ":" << endl;
    nc++;

    while (q--) {
      cin >> a;
      if (a == 0) {
        cin >> b;
        if (vocales.size()) ans1 = (ans1 + b) % vocales.size();
      }
      else if (a == 1) {
        cin >> b;
        if (consonantes.size()) ans2 = (ans2 + b) % consonantes.size();
      }
      else {
        for (int i = 0; i < s.size(); i++) {
          if (let.find(s[i]) != npos) {
            cout << vocales[(pos[i] - ans1 + vocales.size()) % vocales.size()];
          }
          else
            cout << consonantes[(pos[i] - ans2 + consonantes.size()) % consonantes.size()];
        }
        cout << endl;
      }
    }
  }
  return 0;
}
