#include <bits/stdc++.h>

using namespace std;

char toEntero(int n){
	return (char)(n+48);
}

string base2(int n){
	string s;
	while(n>0){
		s.push_back(toEntero(n%2));
		n= n/2;
	}
	return s;
}

int genocide(string s){
	int cont = 0;
	for(int i=0; i<s.size(); i++){
		if(s[i] == '1')cont++;
	}
	if(cont%2 == 0)return 1;
	else return 0;
}

int main(){
	int num,cont=0;
	while(cin>>num){
		cont += genocide(base2(num));
	}
	cout<<cont<<endl;
	return 0;
}