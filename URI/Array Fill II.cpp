#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t;
  cin >> t;

  for (int i = 0; i < 1000; ) {
    for (int j = 0; i < 1000 and j < t; j++) {
      cout << "N[" << i << "] = " << j << endl;
      i++;
    }
  }
  return 0;
}
