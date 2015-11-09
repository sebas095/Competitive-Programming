#include <bits/stdc++.h>
#define endl '\n'
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main(){
	fast;
	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		vector<int> ans(n+m);
		for(int i=0; i<(n+m); i++){
			cin>>ans[i];
		}
		sort(ans.rbegin(),ans.rend());
		for(int i=0; i< ans.size(); i++){
			cout<<ans[i];
			if(i < ans.size()-1) cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}