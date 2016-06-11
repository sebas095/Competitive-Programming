#include <bits/stdc++.h>

using namespace std;

char toEntero(long n){
	return (char)(n+48);
}
void base2(long n, string &s, int &cont){
	while(n>0){
		s.push_back(toEntero(n%2));
		n= n/2;
	}
	s= string(s.rbegin(),s.rend());
	for(int i=0; i<s.size(); i++){
		if(s[i]=='1')cont++;
	}
}

int main(){
	
	while(true){
		long n;
		string s;
		int cont=0;
		cin>>n;
		if(n==0)break;
		base2(n,s,cont);
		cout<<"The parity of "<<s<<" is "<<cont<<" (mod 2)."<<endl;
	}
	return 0;
}