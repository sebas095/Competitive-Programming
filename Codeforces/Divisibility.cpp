#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main(){
	fast;
	long long k,a,b, ans = 0;
	cin>>k>>a>>b;
	if(a>0 && b>0){
		ans = (b/k) - ((a-1)/k);
	}
	else if(a <= 0 && b >= 0){
		ans = (b/k) + 1 - a/k;
	}
	else{
		ans = (abs(a)/k) - ((abs(b)-1)/k); 
	}
	cout<<ans<<endl;
	return 0;
}