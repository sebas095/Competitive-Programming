#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n;
  cin >> n;

  while (n--) {
    string s1, s2, s3;
    cin >> s1 >> s2;
    if (s2.size() > s1.size()) {
      cout << "nao encaixa" << endl;
    }
    else if (s1.size() == s2.size()) {
      cout << ((s1 == s2)? "encaixa" : "nao encaixa") << endl;
    }
    else {
      s3 = s1.substr(s1.size() - s2.size());
      cout << ((s3 == s2)? "encaixa" : "nao encaixa") << endl;
    }
  }

  return 0;
}
