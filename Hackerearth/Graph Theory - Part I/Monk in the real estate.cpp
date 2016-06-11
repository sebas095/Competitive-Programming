#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	fast;
	int t,n,a,b;
	set<int> G;
	cin>>t;
	while(t--){
		G.clear();
		cin>>n;
		while(n--){
			cin>>a>>b;
			G.insert(a);
			G.insert(b);
		}
		cout<<G.size()<<endl;
	}
	return 0;
}