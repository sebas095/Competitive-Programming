#include <bits/stdc++.h>

using namespace std;

long Bigmod(long b, long p, long m){
	int mask = 1;
	long pow2 = b%m;
	long r=1;
	while(mask){
		if(p & mask) r=((r%m)*(pow2%m))%m;
		pow2 = ((pow2%m)*(pow2%m))%m;
		mask <<= 1;
	}
	return r;
}

int main(){
	int cases;
	cin>>cases;
	long a,b,mod=10;
	while(cases--){
		cin>>a>>b;
		cout<<Bigmod(a,b,mod)<<endl;
	}
	return 0;
}