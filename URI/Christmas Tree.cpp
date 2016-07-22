#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

void spaces(int n) {
  while (n--) cout << " ";
}

int main() {
  fast;
  int n;

  while (cin >> n) {
    int offset = floor(n / 2.0);

    for (int i = 0, j = 1; i < offset + 1; i++, j += 2) {
      spaces(offset - i);
      for (int k = 0; k < j; k++) cout << "*";
      cout << endl;
    }

    spaces(offset); cout << "*" << endl;
    spaces(offset - 1); cout << "***" << endl;
    cout << endl;
  }

  return 0;
}
