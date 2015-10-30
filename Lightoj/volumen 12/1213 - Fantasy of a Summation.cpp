#include <bits/stdc++.h>

using namespace std;

#define D(x,ans) cout<<"Case "<<x<<": "<<ans<<endl

long long modular_pow(long long base, long long exponent, long long modulus){
	long long result = 1;
	while (exponent > 0){
		if (exponent % 2 == 1)
			result = (result * base) % modulus;
		exponent = exponent >> 1;
		base = (base * base) % modulus;
	}
	return result;
}


int main(){
	int t;
	cin>>t;
	for (int K = 1; K <= t; K++){
		long long n,k,mod, ans = 0;
		cin>>n>>k>>mod;
		int num[n];
		for(int i=0; i<n; i++)cin>>num[i];
		for(int i=0; i<n; i++){
			ans += num[i];
			ans %=mod;
		}
		ans = (ans*k*modular_pow(n,k-1,mod))%mod;
		D(K,ans);
	}
	return 0;
}