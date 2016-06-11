#include <bits/stdc++.h>

using namespace std;

map <int, vector <int> > G;
vector <bool> visited;

void bfs(int start, vector<int> &times){
	queue <int> q;
	q.push(start);
	times[start] = 0;
	visited[start] = true;

	while(!q.empty()){
		int current = q.front();
		q.pop();
		for(int i=0; i<G[current].size(); i++){
			int tmp = G[current][i];
			if(!visited[tmp]){
				visited[tmp] = true;
				times[tmp] = times[current] + 1;
				q.push(tmp);
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	for(int cases=1; cases<=t; cases++){
		G.clear();
		int n,r,s,d,a,b, ans = 0;
		cin>>n>>r;
		vector <int> timeS(n,0), timeD(n,0);
		for(int i=0; i<r; i++){
			cin>>a>>b;
			G[a].push_back(b);
			G[b].push_back(a);
		}
		cin>>s>>d;

		visited.assign(n,false);
		bfs(s,timeS);
		visited.assign(n,false);
		bfs(d,timeD);

		for(int i=0; i<n; i++){
			ans = max(ans, timeS[i] +  timeD[i]);
		}
		cout<<"Case "<<cases<<": "<<ans<<endl;
	}
	return 0;
}