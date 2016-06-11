#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int mod = 1000000007;
	char query;
	long long l,r,kx,ans=0,power = 0;
	int array[n+1];
	for(int i=1; i<=n; i++)cin>>array[i];
	for(int i=1; i<=m; i++){
		cin>>query>>l>>r>>kx;
		if(query == '?'){
			for(int j=l; j<=r; j++){
				power = ceil(pow((j-l+1),kx));
				ans += (array[j]%mod)*(power%mod);
				//cout<<"pow: "<<power<<" a[i]: "<<array[j]<<"  i: "<<j<<"  l: "<<l<<" k: "<<kx<<endl;
			}
			
			//cout<<endl;
			cout<<ans%mod<<endl;
			ans = 0;
			continue;
		}
		if(query == '='){
			for(int j=l; j<=r; j++){
				array[j] = kx;
			}
		}

	}	
	return 0;
}