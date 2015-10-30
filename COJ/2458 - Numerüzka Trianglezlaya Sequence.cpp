#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long int n;
	while(cin>>n && n!=0){
		long long int gaus=0,gauss2=0;
		long long int n2=n;
		gaus=(-1+sqrt(1+8*n2))/2;
		gauss2=gaus*(gaus+1)/2;
		if(gauss2==n)cout<<gaus<<endl;
		else cout<<gaus+1<<endl;		
	}
	return 0;
}