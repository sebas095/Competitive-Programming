#include <bits/stdc++.h>

using namespace std;

//674 - Coin Change: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=615

int coins[5] = {1,5,10,25,50};
int memo[5][7491];
int n;

//Forma recursiva
int DP(int index, int acum){
	if(index >= 5) return 0;
	if(memo[index][acum] != -1) return memo[index][acum];

	int ans1 = 0, ans2 = 0;

	if(acum - coins[index] == 0) ans1 = 1;
	else if(acum - coins[index] > 0) ans1 = DP(index, acum - coins[index]);
	if(acum - coins[index] >= 0) ans2 = DP(index+1, acum);

	return memo[index][acum] = ans1 + ans2;
}

//Forma Iterativa
long ways [7491];
void count (){
    ways [0] = 1;
    for (int i = 0; i < 5; i++ ){
        for (int j = coins [i]; j < 7491; j++)
            ways [j] += ways [j - coins [i]];
    }
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	count();
	memset(memo,-1,sizeof(memo));
	while(cin>>n){
		cout<<DP(0,n)<<endl;
		//cout<<ways[n]<<endl;
	}
	return 0;
}