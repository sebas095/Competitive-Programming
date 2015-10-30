#include <bits/stdc++.h>
using namespace std;

struct edge{
    int v,w;
    bool fake;
    edge(){}
    edge(int _v, int _w, bool f): v(_v),w(_w),fake(f){}
};

int n;

int dfs(int node, int parent, int acu, vector<vector<edge> > &G){
    if(acu == n) return 0;
    int ans = 100000000;
    for(int i = 0; i < G[node].size(); i++){
        edge cur = G[node][i];
        if(cur.v == parent) continue;
        if(!cur.fake){
            ans = min(ans,dfs(cur.v,node,acu + 1, G)); 
        }else{
            ans = min(ans,dfs(cur.v,node,acu + 1, G)+ cur.w);
        }
    }
    
    return ans;
}

int main(){
    int t, nc = 0; cin >> t;
    while( t-- ){
        int u,v,w; cin >> n;
        vector<vector<edge> > G(n);
        
        for(int i = 0; i < n; i++){
            cin>> u >> v >> w;
            u--;v--;
            G[u].push_back(edge(v,w,0));
            G[v].push_back(edge(u,w,1));
        }
        
        cout << "Case " << ++nc << ": " << dfs(0,0,0, G) << endl;
    }
}