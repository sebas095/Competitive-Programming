#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  for (int i = 1; i <= 9; i += 2) {
    for (int j = i + 6, k = 0; k < 3; j--, k++) {
      cout << "I=" << i << " J=" << j << endl;
    }
  }
  return 0;
}
