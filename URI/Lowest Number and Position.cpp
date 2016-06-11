#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define MP make_pair
#define ff first
#define ss second

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

int main() {
  fast;
  int n, tmp;
  cin >> n;
  vector<pii> x(n);

  for (int i = 0; i < n; i++) {
    cin >> tmp;
    x[i] = MP(tmp, i);
  }

  sort(x.begin(), x.end());
  cout << "Menor valor: " << x[0].ff << endl;
  cout << "Posicao: " << x[0].ss << endl;

  return 0;
}
