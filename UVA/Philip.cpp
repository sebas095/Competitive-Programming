#include <bits/stdc++.h>
#define oo 10000000

//12324 - Philip J. Fry Problem
//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3746

using namespace std;

int bolas[105];
int costo[105];
int memo[105][105];
int n;

int DP(int index, int balls){
	if(index == n)return 0;
	int ans = oo;
	if(memo[index][balls] != -1)return memo[index][balls];
	ans = min(ans, DP(index+1,min(balls+bolas[index],100))+costo[index]);
	if(balls){
		ans = min(ans, DP(index+1,min(balls-1+bolas[index], 100))+(costo[index]/2));
	}

	return 	memo[index][balls] = ans;
}

int main(){
	int t,b;
	while(cin>>n && n!=0){
		memset(memo, -1, sizeof(memo));
		memset(bolas, -1, sizeof(bolas));
		memset(costo, -1, sizeof(costo));
		for(int i=0; i<n; i++){
			cin>>costo[i]>>bolas[i];
		}
		cout<<DP(0,0)<<endl;
	}
	return 0;
}