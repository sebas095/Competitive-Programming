#include <bits/stdc++.h>
#define endl '\n'
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int binary_search(long long element,vector<long long> &b){
	int low = 0, hi = b.size()-1, m, ans = -1;
	while(low <= hi){
		m = (low + hi)/2;
		if(b[m] >= element){
			if(b[m] == element)return m;
			ans = m;
			low = m + 1;
		}
		else
			hi = m - 1;
	}
	return ans;
}

int main(){
	fast;
	int t;
	int n;
	cin>>t;
	while(t--){
		int ans = 0, index = 0;
		cin>>n;
		int tmp;
		vector<long long>a(n+1,0),b(n+1,0);
		for(int i=0; i<n; i++)cin>>a[i];
		for(int i=0; i<n; i++)cin>>b[i];

		for(int i=0; i<n; i++){
			ans = max(ans,binary_search(a[i],b) - i);
		}

		cout<<ans<<endl;
		
	}
	return 0;
}