#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  for (double i = 0.0; i <= 2.0; i += 0.2) {
    for (double j = 1.0; j <= 3.0; j++) {
      cout << "I=" << i << " J=" << i + j << endl;
    }
  }
  return 0;
}
