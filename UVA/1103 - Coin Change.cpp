#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;
//674 - Coin Change: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=615

int coins[5] = {1,5,10,25,50};
int memo[6][7500];
int n;

//Forma recursiva
int DP(int index, int acum){
	if(acum == 0) return 1;
	if(index == 5) return 0;
	if(memo[index][acum] != -1) return memo[index][acum];

	int ans1 = 0, ans2 = 0;

	if(coins[index] <= acum){
		ans1 = DP(index,acum - coins[index]);
		ans2 = DP(index + 1,acum);
	}
	else{
		ans2 = DP(index + 1,acum);
	}

	return memo[index][acum] = ans1 + ans2;
}


int main(){
	fast;
	memset(memo,-1,sizeof(memo));
	while(cin>>n){
		cout<<DP(0,n)<<endl;
		//cout<<ways[n]<<endl;
	}
	return 0;
}