#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int n;
vector<long long> players(100009);

bool check(long long player){
	long long acc = 0;
	for(int i=0; i<n; i++)
		if(players[i] > player)
			return false;

	for(int i=0; i<n; i++)
		acc += player - players[i];
	
	return (acc >= player);
}

long long findGames(){
	long long low = 0, hi = 1e11, mid = 0, ans = 0;
	while(hi - low > 1){
		mid = (low + hi) >> 1;
		if(check(mid))
			hi = mid;
		else
			low = mid;
	}

	return hi;
}

int main(){
	fast;
	cin>>n;
	for(int i=0; i<n; i++) cin>>players[i];
	cout<<findGames()<<endl;
	return 0;
}