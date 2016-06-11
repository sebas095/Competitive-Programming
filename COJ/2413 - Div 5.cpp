#include <bits/stdc++.h>

using namespace std;

int main(){
	int cases;
	cin>>cases;
	string s;
	while(cases--){
		cin>>s;
		if(s[s.size()-1]=='0' || s[s.size()-1]=='5')cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}