#include <bits/stdc++.h>

using namespace std;

#define D(x) cout<<"Case "<<x<<": "

unsigned long long memo[27][155];
int n,k;

unsigned long long DP(int tries, unsigned long long accum){
	if(tries == 0)
		return (accum >= k);
	if(memo[tries][accum] != -1) return memo[tries][accum];
	unsigned long long ans = 0;
	for(int i=1; i<=6; i++){
		ans += DP(tries-1, accum+i);
	}

	return memo[tries][accum] = ans;
}

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int t;
	cin>>t;
	for (int cases = 1; cases <= t; cases++){
		cin>>n>>k;
		memset(memo,-1,sizeof(memo));
		unsigned long long num = DP(n,0LL);
		unsigned long long den = 1LL;
		for(int i=0; i<n; i++) den *= 6LL;
		unsigned long long g = __gcd(num,den);
		num = num/g;
		den = den/g;
		D(cases);	
		(den == 1)? cout<<num<<endl : cout<<num<<"/"<<den<<endl;
	}
	
	return 0;
}