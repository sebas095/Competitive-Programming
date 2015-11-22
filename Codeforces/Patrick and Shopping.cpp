#include <bits/stdc++.h>
#define endl '\n'
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main(){
	fast;
	long long d1,d2,d3,ans = 0;
	cin>>d1>>d2>>d3;
	ans = d1 + d2 + d3;
	ans = min(ans, 2*d1 + 2*d2);
	ans = min(ans, 2*d1 + 2*d3);
	ans = min(ans, 2*d2 + 2*d3);
	cout<<ans<<endl;
	return 0;
}
