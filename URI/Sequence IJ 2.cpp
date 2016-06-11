#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  for (int i = 1; i <= 9; i += 2) {
    for (int j = 7; j >= 5; j--) {
      cout << "I=" << i << " J=" << j << endl;
    }
  }
  return 0;
}
