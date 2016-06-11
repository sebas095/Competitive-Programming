#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, acc = 0, query, qi, value;
  scanf("%d", &n);
  int m[n][n];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) {
      scanf("%d", &m[i][j]);
      if (i == j) acc += m[i][j];
    }

  cin >> query;
  while (query--) {
    scanf("%d", &qi);
    if (qi == 3)
      cout << (acc & 1);
    else {
      scanf("%d", &value);
      acc++;
    }
  }
  cout << endl;
  return 0;
}
