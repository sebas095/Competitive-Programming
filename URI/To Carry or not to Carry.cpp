#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;
typedef unsigned int ui;

int main() {
  fast;
  ui a, b;

  while (cin >> a >> b) {
    cout << (a ^ b) << endl;
  }

  return 0;
}
