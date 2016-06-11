#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main(){
	int dim[16];
	for(int i=0; i<16; i++){
		dim[i] = pow(3,i);
	}
	int n,k;
	cin>>n;
	while(n--){
		int index=0;
		cin>>k;
		int acumulado = k;
		for(int i=15; i>=0; i--){
			if(dim[i] <= k){
				index = i;
				break;
			}
		}
		vector <int> carga(index+1,0);
		int pos=index;
		for(int i=0; i<index+1;){
			if(acumulado >= dim[pos]){
				carga[i] += 1; 
				acumulado -= dim[pos];
			}
			else{
				pos--;
				i++;
			} 
		}
		for(int i=0; i<index+1; i++){
			cout<<carga[i];
			if(i < index){
				cout<<" ";
			}
		}
		cout<<endl;

	}
	return 0;
}