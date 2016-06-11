#include <bits/stdc++.h>

//http://coj.uci.cu/24h/problem.xhtml?pid=3299

using namespace std;

long long triangularNumber(long long a, long long b){
	long long aa = (long long)ceil((double)(-1+sqrt(1+(8*a)))/2);
	long long bb = (long long)floor((double)(-1+sqrt(1+(8*b)))/2);
	return bb-(aa-1); 
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long a,b;
	while(cin>>a>>b && (a+b)){
		cout<<triangularNumber(a,b)<<endl;
	}
	return 0;
}