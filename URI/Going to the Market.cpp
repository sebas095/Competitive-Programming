#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

using namespace std;

int main() {
  fast;
  string name;
  double val;
  int t, m, p, aux;
  cin >> t;

  while (t--) {
  	double ans = 0.0;
  	unordered_map<string, double> fruits;
  	cin >> m;

  	while (m--) {
  		cin >> name >> val;
  		fruits[name] = val;
  	}

  	cin >> p;
  	while (p--) {
  		cin >> name >> aux;
  		ans += fruits[name] * aux;
  	}

  	cout << "R$ " << fixed << setprecision(2) << ans << endl;
  }

  return 0;
}