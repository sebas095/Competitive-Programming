#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

    int n, m, ret, s, d;
    bool a[111][111], ok, mark[111];

void dfs(int tr, int u){
    mark[u] = false;
    s++;
    for(int v = 1; v <= n; v++)
    	if(a[u][v]&&v!=tr){
    		if(!mark[v])ok = false;
    		else dfs(u, v);
    }
}
int main(){
    scanf("%d%d", &n, &m);
    memset(a, false, sizeof(a));
    for(int i = 1; i <= m; i++){
        int u, v;
        scanf("%d%d", &u, &v);
        a[u][v] = a[v][u] = true;
    }
    fill(mark+1, mark+n+1, true);
    ret = d = 0;
    for(int u = 1; u <= n; u++)
    	if(mark[u]){
	        s = 0; ok = true;
	        dfs(0, u);
	        if(!ok&&s%2==1)ret++;
	        if(ok&&s%2==1)d++;
    	}
    if(d%2==1)ret++;
    printf("%d", ret);
}