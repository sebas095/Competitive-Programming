#include <bits/stdc++.h>

#define PI acos(-1)

using namespace std;
 
int main(){
	int cases;
	double r,h,vol=0,aux=0;
	int n;
	scanf("%d",&cases);
	while(cases--){
		vol=0;
		cin>>n;
		for(int i=0; i<n; i++){
			aux=0;
			scanf("%lf %lf",&r,&h);
			aux=PI*r*r*h;
			vol+=aux;
		}
		printf("%.2lf\n",vol);
	}
	return 0;
}