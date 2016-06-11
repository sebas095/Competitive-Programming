#include <bits/stdc++.h>

using namespace std;

int main(){
	int n=12;
	double d,acum=0.0;
	while(n--){
		cin>>d;
		acum+=d;
	}
	cout<<"$"<<acum/12<<endl;

	return 0;
}