#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, index = 0;
  long long starts = 0, tot = 0LL;

  cin >> n;
  vector<bool> seen(n, false);
  vector<long long> sheeps(n);

  for (int i = 0; i < n; i++) cin >> sheeps[i];
  while (index >= 0 and index < n) {
    seen[index] = true;
    if (sheeps[index] & 1) {
      sheeps[index] += (sheeps[index] > 0)? -1 : 0;
      index++;
    }
    else {
      sheeps[index] += (sheeps[index] > 0)? -1 : 0;
      index--;
    }
  }

  starts = count(seen.begin(), seen.end(), true);
  tot = accumulate(sheeps.begin(), sheeps.end(), 0LL);
  cout << starts << " " << tot << endl;

  return 0;
}
