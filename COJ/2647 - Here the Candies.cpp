#include <bits/stdc++.h>

using namespace std;

int main(){
	long long cases,n,m;
	cin>>cases;
	cin>>m;
	while(cases--){
		cin>>n;
		cout<<(n*n)%m<<endl;
	}
	return 0;
}