#include <bits/stdc++.h>

using namespace std;

char toEntero(int n){
	return (char)(n+48);
}

int main(){
	int n;
	cin>>n;
	double cont=0.0;
	vector<double> num(n);
	for(int i=0; i<n; i++)cin>>num[i];
	for(int i=0; i<n; i++)cont+=num[i];
	cont=cont/n;
	printf("%.2lf\n",cont);
	return 0;
}