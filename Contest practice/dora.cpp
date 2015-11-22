#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

long long gauss(long long n){
	return n*(n+1)/2;
}

long long invgauss(long long n){
	return ceil((-1.0 + sqrt((double)(1 + 8*n)))/2.0);
}

int main(){
	fast;
	long long n;
	while(cin >> n && n){
		long long x,y,aux;
		aux = ceil(sqrt((double)2*n));
		
		while(gauss(aux) >= n){
			aux--;
		}

		n -= gauss(aux);
		aux++;

		if(aux%2){
			x = aux - n + 1;
			y = n;
		}
		else{
			x = n;
			y = aux - n + 1;
		}

		cout<<x<<" "<<y<<endl;

	}
	return 0;
}