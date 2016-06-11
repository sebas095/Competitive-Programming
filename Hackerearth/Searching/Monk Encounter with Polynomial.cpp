#include <bits/stdc++.h>
#define endl '\n'
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main(){
	fast;
	int t;
	double a,b,c,k,ans, discr;
	cin>>t;
	while(t--){
		ans = 0.0;
		cin>>a>>b>>c>>k;
		discr = (b*b)-4*(a*(c-k));
		ans = (discr >= 0)? (-b + sqrt(discr))/(2*a) : 0.0;
		ans = (ans < 0)? 0 : ans;
		cout<<ceil(ans)<<endl;
	}
	return 0;
}