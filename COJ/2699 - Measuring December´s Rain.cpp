#include <bits/stdc++.h>

using namespace std;

int main(){
	vector <double> num(30);
	double acum=0,dec=0,total=0;
	for(int i=0; i<30; i++){
		cin>>num[i];
	}
	for(int i=0; i<30; i++){
		acum+=num[i];
	}
	dec=acum/30;
	total=(acum+dec);
	printf("%.3lf\n",total);
	return 0;
}