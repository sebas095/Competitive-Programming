#include <bits/stdc++.h>
#define endl '\n'
#define MOD 100000
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int n;

int bfs(vector<int> &G, long long key, long long lock){
	int dist[100005];
	memset(dist,-1,sizeof(dist));
	queue<int> q;
	q.push(key);
	dist[key] = 0;
	while(!q.empty()){
		long long cur = q.front();
		q.pop();
		if(cur == lock){
			return dist[cur];
		}
		for(int i=0; i<n; i++){
			long long tmp = (cur*G[i])%MOD;
			if(dist[tmp] == -1){
				dist[tmp] = dist[cur] + 1;
				q.push(tmp); 
			}
		}
	}

	return dist[lock];
}

int main(){
	fast;
	long long key,lock;
	cin>>key>>lock>>n;
	vector<int> G(n);
	for(int i = 0; i < n; i++)cin>>G[i];
	cout<<bfs(G,key,lock)<<endl;

	return 0;
}