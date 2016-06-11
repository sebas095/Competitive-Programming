#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;
typedef unsigned long long int ll;

char transform(ll n) {
  if (n == 10) return 'A';
  if (n == 11) return 'B';
  if (n == 12) return 'C';
  if (n == 13) return 'D';
  if (n == 14) return 'E';
  if (n == 15) return 'F';
  if (n == 16) return 'G';
  if (n == 17) return 'H';
  if (n == 18) return 'I';
  if (n == 19) return 'J';
  if (n == 20) return 'K';
  if (n == 21) return 'L';
  if (n == 22) return 'M';
  if (n == 23) return 'N';
  if (n == 24) return 'O';
  if (n == 25) return 'P';
  if (n == 26) return 'Q';
  if (n == 27) return 'R';
  if (n == 28) return 'S';
  if (n == 29) return 'T';
  if (n == 30) return 'U';
  if (n == 31) return 'V';
}

void base32(ll n) {
  string ans = "";
  while (n) {
    ll tmp = n % 32;
    if (tmp <= 9) ans += (tmp + '0');
    else ans += transform(tmp);
    n /= 32;
  }
  reverse(ans.begin(), ans.end());
  cout << ans << endl;
}

int main() {
  fast;
  ll n;
  while (cin >> n) {
    if (!n) {
      cout << "0" << endl;
      break;
    }
    base32(n);
  }
  return 0;
}
