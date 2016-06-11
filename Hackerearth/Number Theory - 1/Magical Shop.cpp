#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

long long modPow(long long base, long long exp, long long mod){
	long long ans = 1;
	while(exp){
		if(exp & 1){
			ans *= base;
			ans %= mod;
		}
		base = base * base;
		base %= mod;
		exp >>= 1;
	}

	return ans;
}

int main(){
	fast;
	long long a,b, ans = 0;
	string s;
	cin>>a>>b>>s;
	for(int i=0; i<s.size(); i++){
		if(s[i] == '1'){
			ans += a;
			ans %= b;
		}
		a = modPow(a,2,b);
	}
	cout<<ans<<endl;
	return 0;
}