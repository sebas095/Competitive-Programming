#include <bits/stdc++.h>

using namespace std;

int n;

struct State{
    int v;
    int cost;
    bool fake;
    State(int v1, int c1, bool f): v(v1),cost(c1),fake(f){}
    State(){}
};

int dfs(int start, int padre, int count, vector<vector<State> > &G){
    if(count == n) return 0;
    int solve = 100000000;
    for(int i = 0; i < G[start].size(); i++){
        State current = G[start][i];
        if(current.v == padre) continue;
        if(!current.fake){
            solve = min(solve,dfs(current.v,start,count + 1, G)); 
        }else{
            solve = min(solve,dfs(current.v,start,count + 1, G)+ current.cost);
        }
    }
    
    return solve;
}

int main(){
	int t;
	cin>>t;
	for(int cases=1; cases<=t; cases++){
		int a,b,w;
		cin>>n;
		vector <vector<State> > G(n);
		for(int i=0; i<n; i++){
			cin>>a>>b>>w;
			a--;b--;
			G[a].push_back(State(b,w,0));
			G[b].push_back(State(a,w,1));
		}

		cout<<"Case: "<<cases<<": "<<dfs(0,0,0, G)<<endl;
	}
	return 0;
}

