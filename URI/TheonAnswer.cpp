#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, t, index = 1, ans = 10000000, person;
  cin >> n;

  while (n--) {
    cin >> t;
    if (t < ans) {
      ans = t;
      person = index;
    }
    index++;
  }

  cout << person << endl;
  return 0;
}
