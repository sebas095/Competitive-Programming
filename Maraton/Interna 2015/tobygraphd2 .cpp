#include <bits/stdc++.h>
using namespace std;

typedef long long  ll;
const ll MN = 10010;

int p[MN], rank[MN];
void makeSet(int x) {
	p[x] = x;
	rank[x] = 0;
}
void link(int x, int y) {
	if (rank[x] > rank[y])
		p[y] = x;
	else {
		p[x] = y;
		if (rank[x] == rank[y])
			rank[y]++;
	}
}

ll findSet(int x) {
	return x != p[x] ? p[x] = findSet(p[x]) : p[x];
}

void merge(int x, int y) {
	link(findSet(x), findSet(y));
}

int main(int argc, char const *argv[]) {
	ll T;
	cin >> T;
	while (T--) {
		int n, m;
		cin >> n >> m;

		memset(p, 0, sizeof p);
		memset(rank, 0, sizeof rank);

		for (int i = 0; i < n; ++i) {
			makeSet(i);
		}

		int b1, b2;
		for (int i = 0; i < m; ++i) {
			cin >> b1 >> b2;
			merge(b1-1, b2-1);
		}

		set<int> ds;
		for (int i = 0; i < n; ++i) 
			ds.insert(p[i]);
		
		cout << ((ds.size()*(ds.size() - 1)) >> 1) << endl;
	}

	return 0;
}