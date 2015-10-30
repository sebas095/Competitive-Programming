#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	int a,b,area=0;
	cin>>s;
	if(s=="square"){
		cin>>a;
		area=a*a;
	}
	else{
		cin>>a>>b;
		area=a*b;
	}
	cout<<area<<endl;
	return 0;
}