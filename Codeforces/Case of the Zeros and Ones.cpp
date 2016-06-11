#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

void zeroOne(string &s){
	for(int i=0; i<s.size(); i++){
		if((i+1) < s.size()){
			if((s[i] == '0' && s[i+1] == '1') || (s[i] == '1' && s[i+1] == '0')){
				s.erase(i,i+1);
				zeroOne(s);
			}
		}
	}
}

int main(){
	int n,i=0;
	string s;
	cin>>n;
	cin.ignore(1,'\n');
	getline(cin,s);
	zeroOne(s);
	cout<<s<<endl;
	cout<<s.size()<<endl;
	return 0;
}