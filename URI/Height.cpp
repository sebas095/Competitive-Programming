#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc, n;
  scanf("%d", &tc);

  while (tc--) {
    scanf("%d", &n);
    vector<int> v(n);

    for (int i = 0; i < n; i++) scanf("%d", &v[i]);
    sort(v.begin(), v.end());
    
    for (int i = 0; i < n; i++) {
      if (i) printf(" ");
      printf("%d", v[i]);
    }
    printf("\n");
  }

  return 0;
}
