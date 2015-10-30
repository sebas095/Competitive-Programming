#include <bits/stdc++.h>

using namespace std;


int main(){
	int g;
	while(cin>>g && g!=0){
		int divi=0;
		string s,s2,s3;
		cin>>s;
		divi=s.size()/g;
		for(int i=0; i<s.size();){
			s2=s.substr(i,divi);
			i+=divi;
			s2=string(s2.rbegin(),s2.rend());
			s3+=s2;
			s2="";
		}
		cout<<s3<<endl;
	}
	return 0;
}