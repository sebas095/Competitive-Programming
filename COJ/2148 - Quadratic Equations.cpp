#include <bits/stdc++.h>

using namespace std;

char toEntero(int n){
	return (char)(n+48);
}

int main(){
	int cases;
	cin>>cases;
	int a,b,c;
	while(cases--){
		int discr=0;
		cin>>a>>b>>c;
		discr=(b*b)-4*(a*c);
		if(discr<0)cout<<"NO";
		else cout<<"SI";
		cout<<endl;
	}
	return 0;
}