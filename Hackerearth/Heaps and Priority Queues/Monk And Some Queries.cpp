#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
	fast;
	int t, queries, x;
	set <int> s;
	vector <int> array(100010, 0);
	cin >> t;
	while (t--) {
		cin >> queries;
		if (queries == 1 or queries == 2) {
			cin >> x;
			if (queries == 1) {
				array[x]++;
				s.insert(x);
			}
			if (queries == 2) {
				if (array[x]) {
					if (array[x] == 1)
						s.erase(x);
					array[x]--;
				}
				else
					cout << "-1" << endl;
			}
		}
		else {
			if (queries == 3)
				(!s.empty())? cout << *s.rbegin() << endl : cout << "-1" << endl;
			else 
				(!s.empty())? cout << *s.begin() << endl : cout << "-1" << endl;
		}
	}
	return 0;
}