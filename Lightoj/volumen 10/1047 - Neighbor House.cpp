#include <bits/stdc++.h>

using namespace std;

int v[25][3];
int memo[25][4];

int f(int n, int c){
	if(n < 0)return 0;
	if(memo[n][c] != -1)return memo[n][c];
	int ans = 30000;
	for(int i=0; i<3; i++){
		if(i != c){
			ans = min(ans, f(n-1,i)+v[n][i]);
		}
	}
	memo[n][c] = ans;
	return memo[n][c];
}

int main(){
	int cases;
	cin>>cases;
	for(int i=1; i<=cases; i++){
		memset(memo,-1,sizeof(memo));
		int houses;
		cin>>houses;
		for(int j=0; j<houses; j++){
			cin>>v[j][0]>>v[j][1]>>v[j][2];
		}
		cout<<"Case "<<i<<": ";
		cout<<f(houses-1,3)<<endl;
	}
	return 0;
}