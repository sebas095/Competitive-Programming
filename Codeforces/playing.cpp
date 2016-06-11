#include <bits/stdc++.h>

using namespace std;

long long cortar(long long a, long long b, long long solve){
	if (a == b){
		return solve+1;
	}
	if((a-b) > b){
		solve += 1;
		cortar ((a-b), b,solve);
	}
	else{
		if (a > b){
			solve+=1;
			cortar(b, (a-b),solve);
		}
	}
}

int main(){
	long long a, b;
	 cin>>a>>b;
	 if (b == 1)  cout<<a<<endl;
	 else cout<<cortar(a,b,0)<<endl;

	return 0;
}