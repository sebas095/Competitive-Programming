#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int start[25], finish[25];

int find(int n, int index) {
  for (int i = 0; i < n; i++) {
    if (start[i] == finish[index]) return i;
  }
  return -1;
}

int main() {
  fast;
  int n;

  while (cin >> n) {
    int ans = 0;

    for (int i = 0; i < n; i++) cin >> start[i];
    for (int i = 0; i < n; i++) cin >> finish[i];
    for (int i = 0; i < n; i++) {
      while (start[i] != finish[i]) {
        int index = find(n, i);
        swap(start[index], start[index - 1]);
        ans++;
      }
    }

    cout << ans << endl;
  }

  return 0;
}
