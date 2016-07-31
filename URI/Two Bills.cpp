#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

const int bills[6] = {2, 5, 10, 20, 50, 100};

bool solve(int change) {
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      if (i != j and bills[i] + bills[j] == change)
        return true;
    }
  }
  return false;
}

int main() {
  fast;
  int n, m;

  while (cin >> n >> m and n + m) {
    cout << ((solve(m - n))? "possible" : "impossible") << endl;
  }

  return 0;
}
