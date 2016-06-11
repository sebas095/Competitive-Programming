#include <bits/stdc++.h>

using namespace std;

void llenado(vector<int> &menores, vector<int> &mayores){
	for(int i=0; i<menores.size(); i++){
		menores[i]=i+1;
	}
	for(int i=0; i<mayores.size(); i++){
		mayores[i]=mayores.size()+1+i;
	}
}

int main(){
	vector<int> menores(555,0),mayores(555,0);
	llenado(menores,mayores);
	int n;
	while(cin>>n){
		vector <int> serie(n);
		int cont1=0,cont2=0;
		for(int i=0; i<n; i++){
			if(i%2 == 0){
				serie[i]=mayores[mayores.size()-1-cont1];
				cont1++;
			}
			else{
				serie[i]=menores[cont2];
				cont2++;
			}
		}

		for(int i=0; i<n; i++){
			cout<<serie[i];
			if(i<n-1)cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}