#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	fast;
	long long n,A, acc = 0, ans = 0;
	cin>>n>>A;
	vector<int> d(n);
	
	for(int i=0; i<n; i++){
		cin>>d[i];
		acc += d[i];
	}

	for(int i=0; i<n; i++){
		int left = max(1LL, A - (acc - d[i]));
		int right = min(0LL + d[i], A - (n - 1));
		ans = d[i] - (right - left + 1);
		if(i)cout<<" ";
		cout<<ans;
	}
	cout<<endl;
	return 0;
}