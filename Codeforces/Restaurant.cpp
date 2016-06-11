#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

//http://codeforces.com/blog/entry/21496

using namespace std;

bool cmp(const pair<int,int> &f, const pair<int,int> &s){
	if(f.second == s.second){
		return (f.first < s.first);
	}
	return (f.second < s.second);
}

int main(){
	fast;
	int n,ans = 0;
	cin>>n;
	vector< pair<int,int> > orders(n);
	for(int i=0; i<n; i++)cin>>orders[i].first>>orders[i].second;
	
	sort(orders.begin(), orders.end(), cmp);
	for(int i=0, prev=0; i<n; i++){
		if(orders[i].first > prev){
			ans++;
			prev = orders[i].second;
		}
	}

	cout<<ans<<endl;
	return 0;
}