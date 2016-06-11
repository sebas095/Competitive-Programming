#include <bits/stdc++.h>
using namespace std;

const int MN = 2000001;

struct trie {
	int nodes[MN][2];
	int tot_nodes;

	void clear(int x = 0) {
		if (x == 0)
			tot_nodes = 1;
		nodes[x][0] = nodes[x][1] = -1;
	}

	void insert(long long x) {
		int node = 0;
		for (int i = 63; i >= 0; --i) {
			int op = (x >> i) & 1;
			if (nodes[node][op] == -1) {
				nodes[node][op] = tot_nodes;
				clear(tot_nodes);
				tot_nodes++;
			}
			node = nodes[node][op];
		}
	}

	long long query(long long x) {
		int node = 0;
		long long ans = 0;
		for (int i = 63; i >= 0; --i) {
			int op = (x >> i) & 1;
			op ^= 1; // Hay que negar el valor
			if(nodes[node][op] != -1) {
				ans |= 1LL << i;
				node = nodes[node][op];
			}else {
				node = nodes[node][op ^ 1];
			}
		}
		return ans;
	}
};


trie tree;
int main() {
	int tc; cin >> tc;
	for (int i = 0; i < tc; ++i) {
		tree.clear();
		int n; cin >> n;
		tree.insert(0);
		long long best = 0;
		long long cur  = 0, t; 
		for (int j = 0; j < n; ++j) {
			cin >> t;
			cur ^= t;
			best = max(best, tree.query(cur));
			tree.insert(cur);
		}
		cout << best << endl;
	}
	return 0;
}