#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, m, x;
  cin >> n;

  vector<int> A(n);
  for (int i = 0; i < n; i++) cin >> A[i];

  cin >> m;
  while (m--) {
    cin >> x;
    for (int i = 0; i < n; i++)
      if (A[i] > x) A[i]--;
  }

  for (int i = 0; i < n; i++) {
    if(i) cout << " ";
    cout << A[i];
  }
  cout << endl;
  return 0;
}
