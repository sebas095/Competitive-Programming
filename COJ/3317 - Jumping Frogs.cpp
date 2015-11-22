#include <bits/stdc++.h>
#define LIMIT 1000004
#define MOD 1000000007
using namespace std;

//674 - Coin Change: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=615

int jumps[] = {1,2};
int n;

//Forma Iterativa
long long ways [LIMIT];
void count (){
    ways [0] = 1;
    for (int i = 0; i < 2; i++ ){
        for (int j = jumps [i]; j < LIMIT; j++){
            ways [j] += ways [j - jumps [i]];
        	if(ways[j] > MOD)
        		ways[j] %= MOD;
        }
    }
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	count();
	while(t--){
		cin>>n;
		cout<<ways[n]<<endl;
	}
	return 0;
}