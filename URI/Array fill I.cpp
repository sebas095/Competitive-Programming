#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int v;
  cin >> v;

  for (int i = 0; i < 10; i++) {
    cout << "N[" << i << "] = " << v << endl;
    v <<= 1;
  }
  return 0;
}
