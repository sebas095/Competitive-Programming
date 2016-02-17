#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t, x;
  cin >> t;
  unordered_map<int, int> frec;

  while (t--) {
    cin >> x;
    frec[x]++;
  }

  for (auto &it : frec) {
    cout << it.first << " aparece " << it.second << " vez(es)" << endl;
  }

  return 0;
}
