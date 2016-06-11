#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, m, b, g, x, index, ans = 0;
  cin >> n >> m;
  vector <bool> people(105, false);
  index = __gcd(n, m);

  cin >> b;
  while (b--) {
    cin >> x;
    if (!people[x % index]) {
      people[x % index] = true;
      ans++;
    }
  }

  cin >> g;
  while (g--) {
    cin >> x;
    if (!people[x % index]) {
      people[x % index] = true;
      ans++;
    }
  }

  cout << ((index == ans)? "Yes" : "No") << endl;
  return 0;
}
