#include <bits/stdc++.h>

using namespace std;

bool isConsonant(char c){
	if(c =='a' || c =='e' || c =='i' || c =='o' || c =='u' || c =='y')return false;
	return true;
}

int main(){
	string s1,s2,solve="";
	cin>>s1;
	for(int i=0; i<s1.size(); i++){
		s2 += tolower(s1[i]);
	}
	for(int i=0; i<s2.size(); i++){
		if(isConsonant(s2[i])){
			solve += ".";
			solve += s2[i];
		}
	}
	cout<<solve<<endl;
	return 0;
}