#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  long long s, d;
  while (cin >> s >> d) {
    long long ans = 0, index = s;
    while (true) {
      ans += index;
      if (ans >= d) {
        cout << index << endl;
        break;
      }
      index++;
    }
  }
  return 0;
}
