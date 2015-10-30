#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string s;
	cin>>n>>s;
	int jumps=4,index,intentos=0;
	int cont=0;
	bool flag = false;
	for(int i=0; i<s.size(); i++){
		if(s[i] == '*'){
			index=i;
		 	break;
		}
	}
	for(int i=index+1; i<s.size(); i++){
		if(s[i] == '*')cont++;
		else break;
	}
	int j=index;
	int inc=1;
	while(!flag){
		if(j == s.size()-1)break;
		while(jumps--){
			if(s[j]=='*'){
				j+=inc;
				intentos++;
			}

			if(intentos == 4){
				flag=true;
			}

		}
		inc++;
	}
	return 0;
}