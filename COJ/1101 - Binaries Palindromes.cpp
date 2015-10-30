//http://coj.uci.cu/24h/problem.xhtml?abb=1101
//1101 - Binaries Palindromes

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
	s= string(s.rbegin(),s.rend());
	return s;
}

void binPalindromes(int a, int b,vector<int> &pal){
	string s,s2;
	pal[0]=-1;
	for(int i=a; i<=b; i++){
		s=base2(i);
		s2=string(s.rbegin(),s.rend());
		if(s==s2)pal[i]=i;
		else pal[i]=-1;
		s="";
		s2="";
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int>pal(200001);
	binPalindromes(1,200000,pal);
	int cases,a,b;
	cin>>cases;
	while(cases--){
		vector <int> bin;
		cin>>a>>b;
		bool f=false;
		for(int i=a; i<=b; i++){
			if(pal[i] != -1){
				bin.push_back(pal[i]);
			}
			else continue;
		}
		for(int i=0; i<bin.size(); i++){
			cout<<bin[i];
			if(i<bin.size()-1)cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}