#include <bits/stdc++.h>
#define N 20005

//http://lightoj.com/volume_showproblem.php?problem=1009
//1009 - Back to Underworld

using namespace std;

vector<bool> visited;
map<int, vector<int> > G;

struct state{
	int v;
	bool rival;
	state(){}
	state(int _v, bool _rival):v(_v),rival(_rival){}
};

int vampires = 0;
int lykan = 0;

void bfs(int start){
	vampires = lykan = 0;
	visited[start] = true;
	queue <state> q;
	q.push(state(start,true));
	while(!q.empty()){
		state current = q.front();
		(current.rival)?vampires++:lykan++;
		q.pop();
		for(int i=0; i<G[current.v].size(); i++){
			int tmp = G[current.v][i];
			if(!visited[tmp]){
				visited[tmp] = true;
				q.push(state(tmp,!current.rival));
			}
		}
	}
}


int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int t;
	cin>>t;
	for(int cases=1; cases<=t; cases++){
		map<int, vector<int> >::iterator it;
		int nodes,a,b,ans = 0;
		cin>>nodes;
		G.clear();
		visited.assign(N,false);
		for(int i=0; i<nodes; i++){
			cin>>a>>b;
			a--;b--;
			G[a].push_back(b);
			G[b].push_back(a);
		}
		for(it = G.begin(); it != G.end(); ++it){
			int curr = it->first;
			if(!visited[curr]){
				bfs(curr);
				ans += max(vampires,lykan);
			}
		}
		cout<<"Case "<<cases<<": "<<ans<<endl;
	}
	return 0;
}