#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>


using namespace std;

double coalition(vector<double> &v, double acum){
	double col=acum;
	bool band=true;
	for (int i = 0; i < v.size(); i++){
		if(col > 50){
			return col;
		}
		else{
			if(v[i]==acum && band==true){
				band=false;
				continue;
			}
			else col+=v[i];
		}
	}
}

int main(){
	double acum=0.0,aux=0.0,col=0.0, h=0.0; 
	int n,x;
	while(true){
		aux=0.0;
		acum=0.0;
		col=0.0;
		h=0.0;
		cin>>n>>x;
		if(n==0 && x==0){
			break;
		}

		vector<double> v(n);
		
		for(int i=0; i<v.size(); i++){
		cin>>aux;
		v[i]=aux;
		}
		acum = v[x-1];

		sort(v.begin(),v.end());

		col = coalition(v, acum);
		h=(acum*100)/col;

		printf("%.2f \n",h);
			
	}

	
	return 0;
}