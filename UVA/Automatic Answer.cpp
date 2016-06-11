#include <bits/stdc++.h>

using namespace std;

string toStr(int x){
	stringstream s;
	s<<x;
	return s.str();
}

int toInt(string x){
	stringstream s;
	s<<x;
	int r;
	s>>r;
	return r;
}

int main(){
	int cases,n,ans=0;
	cin>>cases;
	while(cases--){
		string decena;
		ans = 0;
		cin>>n;
		ans = ((((n*567)/9)+7492)*235)/47-498;
		decena = toStr(ans);
		cout<<decena[decena.size()-2]<<endl;
	}
	return 0;
}