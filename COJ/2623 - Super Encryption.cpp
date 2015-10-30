#include <bits/stdc++.h>

using namespace std;

int main(){
	string s,n1="",n2="",final="";
	getline(cin,s);
	if(s.size()>3){
		if(s.size()%2 == 0){
			n1=s.substr(0,(s.size()/2));
			n2=s.substr((s.size()/2));
			final=n2+n1;
			final=string(final.rbegin(),final.rend());
			cout<<final<<endl;
		}
		else{
			n1=s.substr(0,(s.size()/2));
			n2=s.substr((s.size()/2)+1);
			n1=string(n1.rbegin(),n1.rend());
			n2=string(n2.rbegin(),n2.rend());
			cout<<n1<<s[s.size()/2]<<n2<<endl;
		}	
	}
	else cout<<s<<endl;
	return 0;
}