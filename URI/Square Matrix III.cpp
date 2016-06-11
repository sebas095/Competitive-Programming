#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int justified(int n) {
  stringstream ss;
  ss << n;
  return (ss.str()).size();
}

int main() {
  fast;
  int n;

  while (cin >> n and n) {
    int t = 1 << ((n - 1) << 1);
    t = justified(t);

    for (int i = 0; i < n; i++) {
      for (int j = 0, k = i; j < n; k++, j++) {
        cout << setw(t) << (1 << k) << ((j < n - 1)? ' ' : endl);
      }
    }
    cout << endl;
  }

  return 0;
}
