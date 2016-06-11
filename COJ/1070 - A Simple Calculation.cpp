#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin>>n){
		int cuadro=0,rect=0;
		cuadro = n*(n+1)*(2*n+1)/6;
		rect = (n*n+n)/2 * (n*n+n)/2;
		cout<<cuadro<<" "<<rect<<endl;
	}
	return 0;
}