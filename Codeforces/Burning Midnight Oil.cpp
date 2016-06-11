#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

long long n,k;

long long pot(long long base, int expo){
	long long ans = 1;
	for(int i=0; i<expo; i++)
		ans *= base;

	return ans;
}

long long serie(long long v){
	int i = 1;
	long long ans = v;
	while(true){
		long long term = v/pot(k,i);
		ans += term;
		if(term == 0)break;
		i++;
	}

	return ans;
}

long long solve(){
	long long low = 0, hi = 1e11, mid = 0, ans = 0;
	while(hi - low > 1){
		mid = (low + hi) >> 1;
		if(serie(mid) >= n)
			hi = mid;
		else
			low = mid + 1;
	}

	return (serie(low) >= n)? low : hi;
}

int main(){
	fast;
	cin>>n>>k;
	cout<<solve()<<endl;
	return 0;
}