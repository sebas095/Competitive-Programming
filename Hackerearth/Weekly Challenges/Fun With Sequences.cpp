#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, val, rep;
  cin >> n;
  unordered_set<int> repeat;

  for (int i = 0; i < n; i++) {
    cin >> val;
    if (!repeat.count(val)) repeat.insert(val);
    else rep = val;
  }

  cout << rep;
  for (int i = 1; i < n; i++)
    cout << " " << i;

  cout << endl;
  return 0;
}
