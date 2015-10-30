#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long  ll;

void f(string& s) {
	char c = s[s.size() - 1];
	s.erase(s.end() - 1);
	s.insert(s.begin(), c);
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll T;
	cin >> T;

	while (T--) {
		ll n; cin >> n;
		string s; cin >> s;
		n %= s.size();

		for (ll i = 0; i < n; ++i) {
			f(s);
		}

		cout << s << endl;
	}

	return 0;
}