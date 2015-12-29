#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	fast;
	set<int> hash;
	int t,n,x;
	cin>>t;
	while(t--){
		hash.clear();
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>x;
			hash.insert(x%10);
		}
		cout << n - hash.size() << endl;
	}
	return 0;
}