#include <bits/stdc++.h>

using namespace std;

int main(){
	int cases;
	cin>>cases;
	int num;
	while(cases--){
		cin>>num;
		if(num%2 == 0){
			int aux = num;
			while(aux%2 == 0){
				aux=aux/2;
			}
			num = aux;
		}
		else{
			num=num*2;
		}

		cout<<num<<endl;
	}
	return 0;
}