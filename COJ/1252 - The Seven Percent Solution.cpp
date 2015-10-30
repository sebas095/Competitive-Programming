#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	while(true){
		getline(cin,s);
		if(s=="#")break;
		string s2;
		for(int i=0; i<s.size(); i++){
			if(s[i]==' '){
				s2+="%20";
				continue;
			}
			if(s[i]=='!'){
				s2+="%21";
				continue;
			}
			if(s[i]=='$'){
				s2+="%24";
				continue;
			}
			if(s[i]=='%'){
				s2+="%25";
				continue;
			}
			if(s[i]=='('){
				s2+="%28";
				continue;
			}
			if(s[i]==')'){
				s2+="%29";
				continue;
			}
			if(s[i]=='*'){
				s2+="%2a";
				continue;
			}
			else s2+=s[i];
		}
		cout<<s2<<endl;
	}
	return 0;
}
