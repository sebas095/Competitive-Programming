#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main() {
  fast;
  int n, tmp;
  long long ans = 0;
  vector<int> A(100002, 0);
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> tmp;
    // Se suma la cantidad de parejas posibles de Ai
    ans += A[tmp];
    A[tmp]++;
  }

  cout << ans << endl;
  return 0;
}
