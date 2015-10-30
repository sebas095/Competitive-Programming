#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n, nino, aux;

	cin>>t;
	for(int i=0; i<t; i++){
		nino=0;
		cin>>n;
		for(int j=0; j<n; j++){
			cin>>aux;
			nino+=aux;
		}
		if(nino%n==0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}