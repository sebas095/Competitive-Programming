#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define OO 1e18

using namespace std;

int main(){
	fast;
	int t,n,m;
	cin>>t;
	while(t--){
		bool flag = false;
		int index = 0;
		cin>>n>>m;
		vector<int> boys(n);
		vector<int> girls(m);
		for(int i=0; i<n; i++)cin>>boys[i];
		for(int i=0; i<m; i++)cin>>girls[i];
		if(m >= n){
			flag = true;
			sort(boys.begin(), boys.end());
			sort(girls.begin(), girls.end());
			for(int i=0; i<m; i++){
				if(index == n)break;
				index += (girls[i] < boys[index])? 1 : 0;
			}
		}

		(!flag)? cout<<"NO\n" : (index == n)? cout<<"YES\n" : cout<<"NO\n";
	}
	return 0;
}