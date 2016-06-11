#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MOD 1e9 + 7 

using namespace std;

long long modMult(long long a, long long b, long long mod){
	long long ans = 0;

	while(b){
		if(b & 1){
			ans += a;
			ans %= mod;
		}
		a <<= 1;
		a %= mod;
		b >>= 1;
	}

	return ans;
}

long long modPow(long long base, long long exp, long long mod){
	long long ans = 1;

	while(exp){
		if(exp & 1){
			ans *= base;
			ans %= mod;
		}
		base *= base;
		base %= mod;
		exp >>= 1;
	}

	return ans;
}

long long GCD(vector<long long> &numbers){
	long long ans = numbers[0];

	for(int i=1; i<numbers.size(); i++){
		ans = __gcd(ans,numbers[i]);
	}

	return ans;

}

int main(){
	fast;
	int n;
	cin>>n;
	vector<long long> numbers(n);
	for(int i=0; i<n; i++) cin>>numbers[i];
	
	long long ans = numbers[0], exponent = GCD(numbers);
	for(int i=1; i<n; i++){
		ans = modMult(ans,numbers[i],MOD);
	}
	ans = modPow(ans,exponent,MOD);
	cout<<ans<<endl;
	return 0;
}