#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, a, b, cont;
	cin>>t;
	
	for (int i=0; i<t; i++){
		cin>>a>>b;
		cont=0;
		
		if(a<b){
			cont=b-a;
		}	
		else{
			while(a>b){
				a=a/2;
				cont++;
			}
			if(a<b){
				while(a<b){
					a++;
					cont++;
				}
			}
		}
		cout<<cont<<endl;
	}
	
	return 0;
}