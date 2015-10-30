#include <bits/stdc++.h>

using namespace std;

void latin(string &s){
	string s2;
	if(s[0]=='a' || s[0]=='e' || s[0]=='i' || s[0]=='o' || s[0]=='u'){
		s+="cow";
		return;
	}
	else{
		s2=s[0];
		s.erase(0,1);
		s+=s2;
		s+="ow";
	}
}

int main(){
	int n;
	string s;
	cin>>n;
	while(n--){
		cin>>s;
		latin(s);
		cout<<s<<endl;
	}
	return 0;
}