#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  // initialize random seed:
  srand (time(NULL));
  int t = 5;
  int sign[3] = {0, -1, 1};
  cout << t << endl;

  while (t--) {
    int n = (rand() % 197 + 1) + 3; // [1, 200]
    int k = rand() % n + 1;   // [1, n]
    cout << n << " " << k << endl;

    for (int i = 0; i < n - 3; i++) {
      int s = rand() % 2 + 1; // [1, 2]
      int val = rand() % 1000;
      val *= sign[s];
      cout << val << " ";
    }

    cout << "-4 8 0" << endl;
  }

  return 0;
}
