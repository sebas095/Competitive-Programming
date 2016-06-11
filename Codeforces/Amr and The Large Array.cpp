#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main(){
	int n,maximo=0,indexmax=0,temp=-1,inicio=0,fin=0,ans1=0,ans2=0,minimo=2e6;
	cin>>n;
	int array[n];
	for(int i=0; i<n; i++)cin>>array[i];
	for(int i=0; i<n; i++)maximo = max(maximo,array[i]);
	vector <int> posibles(maximo+1,0),opciones;
	for(int i=0; i<n; i++)posibles[array[i]]++;
	for(int i=0; i<maximo+1; i++){
		if(posibles[i] > temp){
			temp = posibles[i];
			indexmax = posibles[i];
		}
	}
	for(int i=0; i<posibles.size(); i++){
		if(posibles[i] == indexmax){
			opciones.push_back(i);
		}
	}

	for(int j=0; j<opciones.size(); j++){
		for(int i=0; i<n; i++){
			if(array[i] == opciones[j]){
				inicio = i;
				break;
			}
		}
		for(int i=n-1; i>=0; i--){
			if(array[i] == opciones[j]){
				fin = i;
				break;
			}

		}

		if((fin - inicio) < minimo){
			minimo = fin - inicio;
			ans1 = inicio+1;
			ans2 = fin+1;
		}
	}

	cout<<ans1<<" "<<ans2<<endl;

	return 0;
}