#include <bits/stdc++.h>

using namespace std;

int main(){
	vector <int> div(500003,0);
	for(int i=1; i<=500001; i++){
		for(int j=i; j<=500001; j+=i){
			if(i != j)div[j]+=i;
		}
	}
	int cases,n;
	cin>>cases;
	while(cases--){
		cin>>n;
		cout<<div[n]<<endl;
	}
	return 0;
}