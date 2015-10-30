#include <bits/stdc++.h>

using namespace std;

int main(){
	int cases;
	cin>>cases;
	while(cases--){
		int n,m,aux,max=-1,index=0;
		cin>>n>>m;
		vector<int>candidatos(n,0);
		aux=0;
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				cin>>aux;
				candidatos[j]+=aux;
			}
		}

		for(int i=0; i<n; i++){
			if(candidatos[i]>max){
				max=candidatos[i];
				index=i;
			}
		}

		cout<<index+1<<endl;
	}
	return 0;
}