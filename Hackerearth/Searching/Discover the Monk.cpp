#include <bits/stdc++.h>
#define endl '\n'
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main(){
	fast;
	int n,q,qi;
	cin>>n>>q;
	vector<int>v(n);
	for(int i=0; i<n; i++)cin>>v[i];
	sort(v.begin(),v.end());
	while(q--){
		cin>>qi;
		(binary_search(v.begin(),v.end(),qi))? cout<<"YES\n" : cout<<"NO\n"; 
	}
	return 0;
}
