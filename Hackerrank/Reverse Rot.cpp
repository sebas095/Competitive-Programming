#include <bits/stdc++.h>

using namespace std;

map <char, int> encode;
string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";

void gen(){
	for(int i=0; i<28; i++){
		encode[s[i]] = i;
	}
}

int main(){
	gen();
	int n;
	string msj;
	while(cin>>n && n){
		cin>>msj;
		string encrypted;
		for(int i=0; i<msj.size(); i++){
			encrypted += s[(encode[msj[i]] + n)%28];
		}
		encrypted = string(encrypted.rbegin(), encrypted.rend());
		cout<<encrypted<<endl;
	}
	return 0;
}