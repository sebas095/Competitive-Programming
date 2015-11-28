#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	fast;
	int n,m;
	cin>>n>>m;
	vector<int> a(n), b(m);

	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<m; i++) cin>>b[i];

	sort(a.begin(), a.end());

	vector<int>::iterator it;
	for(int i=0; i<m; i++){
		it = upper_bound(a.begin(), a.end(),b[i]);
		if(i) cout<<" ";
		cout<< it-a.begin();
	}
	cout<<endl;
	return 0;
}