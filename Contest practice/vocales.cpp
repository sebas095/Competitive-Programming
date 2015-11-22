#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

bool isVocal(char c){
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		return true;
	return false;
}

int main(){
	fast;
	int n;
	string s;
	cin>>n;
	while(n--){
		cin>>s;
		int v = 0,c = 0;
		for(int i = 0; i < s.size(); i++)
			if(isVocal(s[i])){
				v++;
			}
			else
			 	c++;
		
		(v > c)? cout<<s<<"\n1\n" : cout<<s<<"\n0\n";
	}
	return 0;
}