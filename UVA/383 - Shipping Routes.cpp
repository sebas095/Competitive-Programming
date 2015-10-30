#include <bits/stdc++.h>

using namespace std;

map <string, vector<string> > G;
map <string, bool> visited;

struct state{
	string code;
	int cost;

	state(string cod, int c):code(cod),cost(c){}
	state(){}
};

int BFS(string source, string target){
	queue<state> q;
	q.push(state(source,0));
	visited[source] = true;
	while(!q.empty()){
		state current = q.front();
		q.pop();
		if(current.code == target){
			return current.cost;
		}
		for(int i=0; i<G[current.code].size(); i++){
			string tmp = G[current.code][i];
			if(!visited[tmp]){
				visited[tmp] = true;
				q.push(state(tmp,current.cost+1));
			}
		}
	}

	return -1;
}

int main(){
	int cases,price;
	int nodes,edges,query;
	string aux,a,b;
	cin>>cases;
	cout<<"SHIPPING ROUTES OUTPUT\n\n";
	for(int k = 1; k<=cases; k++){
		G.clear();
		cin>>nodes>>edges>>query;
		for(int i=0; i<nodes; i++){
			cin>>aux;
		}
		for(int i=0; i<edges; i++){
			cin>>a>>b;
			visited[a] = false;
			visited[b] = false;
			G[a].push_back(b);
			G[b].push_back(a);
		}
		cout<<"DATA SET  "<<k<<endl<<endl;
		for(int i=0; i<query; i++){
			cin>>price>>a>>b;
			visited.clear();
			int cost = BFS(a,b);
			if(cost >= 0){
				cout<<"$"<<price*cost*100<<endl;
			}
			else cout << "NO SHIPMENT POSSIBLE" << endl;
		}
		cout<<endl;
	}
	cout<<"END OF OUTPUT"<<endl;
	return 0;
}

