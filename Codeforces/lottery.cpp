#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main(){
	fast;
	int k,n, color, eq,ans = 0;
	cin>>n>>k;
	vector<int> balls(k);
	for(int i=0; i<n; i++){
		cin>>color;
		color--;
		balls[color]++;
	}

	eq = n/k;

	for(int i=0; i<k; i++)
		if(balls[i] < eq)
			ans += eq - balls[i];
	
	cout<<ans<<endl;

	return 0;
}