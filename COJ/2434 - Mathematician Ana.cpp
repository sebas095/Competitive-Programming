#include <bits/stdc++.h>

using namespace std;

void Criba(vector<int> &primos){
	primos[0]=primos[1]=0;
	for(int i=4; i<=50; ){
		primos[i]=0;
		i+=2;
	}
	for(int i=3; i<=sqrt(50); i++){
		if(primos[i]==1){
			for(int j=3; i*j<=50;){
				primos[i*j]=0;
				j+=2;
			}
		}
	}
	for(int i=2; i<=50; i++){
		if(primos[i]==1){
			primos[i]=i;
		}
	}
}

int main(){
	vector <int> primos(51,1);
	Criba(primos);
	int n;
	while(cin>>n && n!=0){
	    long long res=1;
		for(int i=2; i<=n; i++){
			if(primos[i]!=0){
				res*=i;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}