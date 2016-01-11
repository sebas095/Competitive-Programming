#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	fast;
	long long ans = 0, tot = 0, n;
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		ans = tot = 0;
		ans = (n*(n+1)) >> 1;

		for(long long i=0; (1 << i) <= n; i++){
			tot += (1 << i);
		}
		
		tot <<= 1;
		ans -= tot;
		cout<<ans<<endl;
	}
	return 0;
}