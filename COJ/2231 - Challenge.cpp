#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,cont=0;
	cin>>n;
	string a,b;
	while(n--){
		cin>>a>>b;
		if(a=="rock"){
			if(b=="scissors"){
				cont++;
			}
			if(b=="paper"){
				cont--;
			}
		}
		if(a=="scissors"){
			if(b=="rock"){
				cont--;
			}
			if(b=="paper"){
				cont++;
			}
		}
		if(a=="paper"){
			if(b=="scissors"){
				cont--;
			}
			if(b=="rock"){
				cont++;
			}
		}
	}
	if(cont == 0)cout<<"tied"<<endl;
	else{
		if(cont > 0)cout<<"A win"<<endl;
		else cout<<"B win"<<endl;
	}
	return 0;
}