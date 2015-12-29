#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

vector<bool> divs(10000005,false);

void sieve(){
	divs[0] = divs[1] = true;
	for(int i=2; i<10005; i++){
		if(!divs[i]){
			for(int j=2; i*j<10000005; j++){
				divs[i*j] = true;
			}
		}
	}
}

bool valid(int n){
    int sq = (int)(sqrt((double)n) + 0.5);
    if(sq*sq == n && !divs[sq])
    	return false;
    return (divs[n]  && (n != 1));
}

int main(){
	fast;
	sieve();
	int n,x;
	cin>>n;
	while(n--){
		cin>>x;
		(valid(x))? cout<<"YES\n" : cout<<"NO\n";
	}
	return 0;
}