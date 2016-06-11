#include <bits/stdc++.h>
#define endl '\n'
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main(){
	fast;
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		long long ai, ans = 0, top = 0;
		priority_queue<long long> pq;
		for(int i=0; i<n; i++){
			cin>>ai;
			pq.push(ai);
		}

		while(k--){
			top = pq.top();
			pq.pop();

			ans += top;
			pq.push(floor((double)top/2.0));
		}

		cout<<ans<<endl;

	}
	return 0;
}