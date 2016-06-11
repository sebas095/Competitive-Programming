#include <bits/stdc++.h>

using namespace std;

int serie(int a, int b){
	int cont=0,contm=-1;
	int maxi=max(a,b);
	int mini=min(a,b);
	int n=0;
	for(int i=mini; i<=maxi; i++){
		n=i;
		cont=0;
		while(n!=1){
			if(n%2 == 0){
				n=n/2;
				cont++;
			}
			else {
				n=3*n+1;
				cont++;
			}
		}
		if(cont>contm)contm=cont;
	}
	return contm+1;
}

int main(){
	int a,b,cont;
	while(cin>>a>>b){
		cont=0;
		cont=serie(a,b);
		cout<<a<<" "<<b<<" "<<cont<<endl;
	}
	return 0;
}