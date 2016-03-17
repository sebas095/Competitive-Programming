#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n;
  char a, b, c;
  cin >> n;

  while (n--) {
    cin >> a >> b >> c;
    if (a == c) {
      cout << (a - '0') * (c - '0') << endl;
    }
    else if (b >= 'A' and b <= 'Z') {
      cout << (c - '0') - (a - '0') << endl;
    }
    else if (b >= 'a' and b <= 'z') {
      cout << (c - '0') + (a - '0') << endl;
    }
  }

  return 0;
}
