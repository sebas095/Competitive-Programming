#include <bits/stdc++.h>

using namespace std;

int main(){
	int cases;
	cin>>cases;
	string s;
	while(cases--){
		cin>>s;
		for(int i=0; i<s.size(); i++){
			if(s[i] < 91)s[i]+=32;
			else s[i]-=32;
		}
		cout<<s<<endl;
	}
	return 0;
}