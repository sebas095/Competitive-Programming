#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, val;
  vector<int> odd, even;
  cin >> n;

  while (n--) {
    cin >> val;
    if (val & 1) odd.push_back(val);
    else         even.push_back(val);
  }

  sort(even.begin(), even.end());
  sort(odd.rbegin(), odd.rend());

  for (int i = 0; i < even.size(); i++) cout << even[i] << endl;
  for (int i = 0; i < odd.size(); i++)  cout << odd[i] << endl;

  return 0;
}
