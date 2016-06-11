#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

vector<int> accum;

int main(){
	fast;
	long long t,n,a,b;
	long long ans;
	cin>>t;
	while(t--){
		ans = 0;
		accum.assign(1000005, 0);
		cin>>n;

		for(int i=0; i<n; i++){
			cin>>a>>b;
			accum[a]++;
			if(!accum[b])
				ans++;
			else
				accum[b]--;
		}
		cout << ans << endl;
	}

	return 0;	
}