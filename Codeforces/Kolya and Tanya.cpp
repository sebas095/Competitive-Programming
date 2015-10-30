#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	long long int n,sub=1,add=1, ans = 0,MOD = 1000000000 + 7;
	cin>>n;
	for(int i=0; i<n; i++) sub = (sub*7)%MOD;
	for(int i=0; i<3*n; i++) add = (add*3)%MOD;
	ans = (add - sub + MOD)%MOD;
	cout<<ans<<endl;
	return 0;
}