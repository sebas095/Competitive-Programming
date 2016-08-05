#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int josephus(int n, int k) {
  int index = 0;
  vector<int> v(n);

  for (int i = 0; i < n; i++) v[i] = i + 1;
  if (v.size() > 1) {
    do {
      v.erase(v.begin() + index);
      index = (index + k - 1) % v.size();
    } while(v.size() > 1);
  }

  return (v[0] == 13);
}

int main() {
  fast;
  int n;

  while (cin >> n and n) {
    int ans = 1;
    while (!josephus(n, ans)) ans++;
    cout << ans << endl;
  }

  return 0;
}
