#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define inf 1000000000

using namespace std;

int memo[31][31][51];

int DP(int n, int m, int k){
	if( k == 0 || k == n*m) return 0; 
	if(memo[n][m][k] != -1) return memo[n][m][k];
	int ans = inf;

	// Elegir el costo menor partiendo por filas la chocolatina
	// El ans sumara el coste de las dos partes que tiene al partir la chocolatina por filas
	for(int i=1; i<n; i++){
		for(int j=0; j<k; j++){
			ans = min(ans, m*m + DP(n - i, m, k - j) + DP(i, m, j));
		}
	}

	// Elegir el costo menor partiendo por columnas la chocolatina
	// El ans sumara el coste de las dos partes que tiene al partir la chocolatina por columnas
	for(int i=1; i<m; i++){
		for(int j=0; j<k; j++){
			ans = min(ans, n*n + DP(n, m - i, k - j) + DP(n, i, j));
		}
	}

	return memo[n][m][k] = ans;
}

int main(){
	fast;
	int t,n,m,k;
	cin>>t;
	memset(memo,-1,sizeof(memo));
	while(t--){
		cin>>n>>m>>k;
		cout<<DP(n,m,k)<<endl;
	}
	return 0;
}