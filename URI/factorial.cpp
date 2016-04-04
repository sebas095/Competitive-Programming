#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long int ll;

vector<ll> a;

void gen() {
  int i;
  ll total = 1;
  a = vector<ll>(11,1);
  a[0] = 1;
  for(i = 1; i <= 10; i++) {
    total *= i;
    a[i] = total;
  }
}

int solve (ll c){
  ll total = 0;
  int index = 0, ans = 0;

  for (int i = 11; i >= 0; i--) {
    if (a[i] <= c) {
      index = i;
      break;
    }
  }

  for(int i = index; i >= 0; ) {
    if (total + a[i] <= c) {
      total += a[i];
      ans++;
    }
    else i--;
  }

  return ans;
}

int main() {
  fast;
  ll n;
  gen();
  cin >> n;
  cout << solve(n) << endl;
   return 0;
}
