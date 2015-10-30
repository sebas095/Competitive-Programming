#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	int a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(a == 0 || b == 0) cout<<"First\n";
		else{
			if( (a+b)%2 == 0)
				cout<<"Second\n";
			else
				cout<<"First\n";
		}
	}
	return 0;
}