#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int i = 1, j = 60;
  while (j >= 0) {
    cout << "I=" << i << " J=" << j << endl;
    i += 3;
    j -= 5;
  }
  return 0;
}
