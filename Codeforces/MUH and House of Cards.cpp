#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

long long totCards(long long pisos){
	return 3*pisos*(pisos + 1)/2 - pisos; //Formula para obtener de cartas total para
										// construir una casa (extraida del editorial)
}

long long findMax(long long n){
	long long low = 0, hi = 10000000, mid = 0, ans = 0;

	while((low + 1) < hi){
		mid = (low + hi) >> 1;
		if(totCards(mid) <= n)
			low = mid;
		else
			hi = mid;
	}

	ans = low;
	while((ans + n) % 3) ans--;

	return (ans + 2)/3;
}

int main(){
	fast;
	long long n;
	cin>>n;
	cout<<findMax(n)<<endl;
	return 0;
}