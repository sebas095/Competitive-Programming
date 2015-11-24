#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int s,n;
int memo[2002][2002];

int DP(int index, int capacity, vector<int> &weights, vector<int> &prices){
	if(index == n || capacity == 0) return 0;
	if(memo[index][capacity] != -1) return memo[index][capacity];

	int ans = -1;

	if(weights[index] > capacity)
		ans = DP(index + 1, capacity, weights, prices);
	else{
		ans = max(DP(index + 1, capacity, weights, prices),DP(index + 1, capacity - weights[index], weights, prices) + prices[index]);
	}

	return memo[index][capacity] = ans;
}

int main(){
	fast;
	cin>>s>>n;
	
	memset(memo,-1,sizeof(memo));
	vector<int> weights(n), prices(n);
	for(int i=0; i<n; i++) cin>>weights[i]>>prices[i];
	
	cout<<DP(0,s,weights,prices);

	return 0;
}