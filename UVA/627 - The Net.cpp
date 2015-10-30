#include <bits/stdc++.h>

using namespace std;

map<int, vector<int> > G;
map<int, bool> visited;

void path(int source, int target, vector<int> &prev){
	vector<int> solve;
	while(prev[target] != -1){
		solve.push_back(target);
		target = prev[target];
	}
	solve.push_back(source);
	for(int i = solve.size()-1; i>=0; i--){
		cout<<solve[i];
		if(i != 0)cout<<" ";
	}
	cout<<endl;
}

void BFS(int source, int target, vector<int> &prev){
	queue<int> q;
	q.push(source);
	prev[source] = -1;
	while( !q.empty()){
		int current = q.front();
		q.pop();
		visited[current] = true;
		if( current == target){
			path(source, target, prev);
			return;
		}
		for(int i=0; i<G[current].size(); i++){
			int tmp = G[current][i];
			if(!visited[tmp]){
				q.push(tmp);
				prev[tmp] = current;
			}
		}
	}
	cout<<"connection impossible\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int n;
	while(cin>>n){
		G.clear();
		int node, b, travels, source, target;
		char c;
		string edges, token;
		stringstream ss;
		for(int i=0; i<n; i++){
			node = b = 0;
			ss.str(string());
			ss.clear();
			cin>>edges;
			ss << edges;
			getline(ss,token,'-');
			node = token[0] - '0';
			while(getline(ss,token,',')){
				b = token[0] - '0';
				G[node].push_back(b);
				visited[node] = false;
			}

		}
		cin>>travels;
		cout<<"-----\n";
		for(int i=0; i<travels; i++){
			visited.clear();
			cin>>source;
			cin>>target;
			vector<int> prev(n,0);
			BFS(source,target,prev);
		}

	}
	return 0;
}