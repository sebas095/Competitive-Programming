#include <bits/stdc++.h>

using namespace std;

char toEntero(int n){
	return (char)(n+48);
}
string base3(int n){
	string s;
	while(n>0){
		s.push_back(toEntero(n%3));
		n= n/3;
	}
	s= string(s.rbegin(),s.rend());
	return s;
}

int main(){
	int n;
	while(cin>>n && n>=0){
		string ans=base3(n);
		cout<<ans<<endl;
	}
	return 0;
}