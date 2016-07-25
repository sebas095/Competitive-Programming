#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  unsigned long long ans = 0;
  string caw = "caw caw";
  string eyes;

  while (getline(cin, eyes)) {
    if (eyes == caw) {
      cout << ans << endl;
      ans = 0;
    }
    else {
      string bin;
      for (int i = 0; i < eyes.size(); i++) {
        if (eyes[i] == '-') bin += '0';
        else bin += '1';
      }

      bitset<3> bs(bin);
      ans += bs.to_ullong();
    }
  }

  return 0;
}
