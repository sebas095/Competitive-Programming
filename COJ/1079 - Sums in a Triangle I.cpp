#include <bits/stdc++.h>
//http://coj.uci.cu/24h/problem.xhtml?pid=1079
using namespace std;

int memo[102][102];
int n;

int DP(int fil, int col,vector< vector<int> > &triangles){
	if(fil>=n || col>=n || col == triangles[fil].size()) return 0;
	if(memo[fil][col] != -1) return memo[fil][col];
	int ans = DP(fil + 1, col, triangles);
	ans = max(ans,DP(fil + 1, col + 1, triangles)) + triangles[fil][col];
	return memo[fil][col] = ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		memset(memo,-1,sizeof(memo));
		cin>>n;
		int num;
		vector< vector<int> > triangles(n);
		for(int i=0; i<n; i++){
			vector<int> aux;
			for(int j=0; j<=i; j++){
				cin>>num;
				aux.push_back(num);
			}
			triangles[i] = aux;
		}
		cout<<DP(0,0,triangles)<<endl;
	}
	return 0;
}