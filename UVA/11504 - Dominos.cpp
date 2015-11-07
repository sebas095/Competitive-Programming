#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

void dfs(int u, vector< vector<int> > &G, vector<bool> &visited, vector<int> &paths){
    visited[u] = true;
    for(int i=0; i<G[u].size(); i++){
        int tmp = G[u][i];
        if(!visited[tmp]) dfs(tmp,G,visited,paths);
    }
    paths.push_back(u);
}

int main(){
    fast;
    int t;
    cin>>t;
    int nodes,edges;
    int a,b;
    while(t--){
        int ans = 0;
        cin>>nodes>>edges;
        vector< vector<int> > G(nodes);
        vector<int> paths;
        vector<bool> visited(nodes,false);
        for(int i=0; i<edges; i++){
            cin>>a>>b;
            a--;b--;
            G[a].push_back(b);
        }
        for(int i=0; i<nodes; i++){
            if(!visited[i]){
                dfs(i,G,visited,paths);
            }
        }
        reverse(paths.begin(), paths.end());
        visited.assign(nodes,false);
        for(int i=0; i<nodes; i++){
            int u = paths[i];
            if(!visited[u]){
                dfs(u,G,visited,paths);
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}