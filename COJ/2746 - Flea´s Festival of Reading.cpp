#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	int cont_vocals=0,cont_letters=0;
	getline(cin,s);
	for(int i=0; i<s.size(); i++){
		if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')cont_vocals++;
		else cont_letters++;
	}
	cout<<cont_vocals<<" "<<cont_letters<<endl;
	return 0;
}