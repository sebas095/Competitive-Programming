#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int zetsu, raikage;

struct duel {
	int node;
	bool army;
	duel() {}
	duel(int _node, bool _army) : node(_node), army(_army) {}
};

void bfs(int node, map<int, vector<int> > &G, map<int, bool > &visited) {
	queue<duel> q;
	visited[node] = true;
	q.push(duel(node, true));

	while (!q.empty()) {
		duel current = q.front();
		q.pop();
		if (current.army) raikage++;  
		else zetsu++;

		for (int i = 0; i < G[current.node].size(); i++) {
			int tmp = G[current.node][i];
			if (!visited[tmp]) {
				visited[tmp] = true;
				q.push(duel(tmp, !current.army));
			}
		}

	}
}

int main() {
	fast;
	int t, edges, a, b, ans, nc = 0;
	cin >> t;
	while (t--) {
		ans = 0;
		nc++;
		map<int,vector<int> >G;
		map<int,bool > visited;
		map<int,bool >::iterator it;
		cin >> edges;

		while (edges--) {
			cin >> a >> b;
			a--;b--;
			visited[a] = visited[b] = false;
			G[a].push_back(b);
			G[b].push_back(a);
		}

		for(it = visited.begin(); it != visited.end(); ++it) {
			if(!it->second) {
				zetsu = raikage = 0;
				bfs(it->first, G, visited);
				ans += max(zetsu, raikage);
			}
		}

		cout << "Case " << nc << ": " << ans << endl;

	}
	return 0;
}