#include <bits/stdc++.h>

using namespace std;

int toChar(char n){
	return n-64;
}

int main(){
	string s;
	int tot=0;
	cin>>s;
	for(int i=0; i<s.size(); i++){
		tot+=toChar(s[i]);
	}
	cout<<tot<<endl;
	return 0;
}