#include <bits/stdc++.h>

using namespace std;

int main(){
	string s,s2;
	vector <string> msj;
	string sol,aux;
	bool flag = false;
	bool init = true;
	cin>>s;
	for(int i=0; i<s.size(); i++){
		if(s[i] == 'C' || s[i] == 'O' || s[i] == 'D' || s[i] == 'E' || s[i] == 'F' || s[i] == 'R' || s[i] == 'S'){
			continue;
		}
		else s[i] = 'Z';
	}
	for(int i=0; i<s.size(); i++){
		if(s[i] == 'Z'){
			init = false;
			break;
		}
	}
	//cout<<s<<endl;
	if(!init){
		for(int i=0; i<s.size(); i++){
			if(s[i] != 'Z') {
				s2 += s[i];
				if(i == s.size()-1)msj.push_back(s2);
			}
			else {
				if(s2 != "")msj.push_back(s2);
				s2 = "";
			}
		}
		if(msj.size() == 1){
			if(msj[0] == "CODEFORCES")cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		else{
			for(int i=0; i<msj.size()-1; i++){
				sol ="";
				sol += msj[i];
				if(sol == "CODEFORCES"){
					flag = true;
					break;
				}
				else{
					for(int j=i+1; j<msj.size(); j++){
						aux = sol + msj[j];
						if(aux == "CODEFORCES"){
							flag = true;
							break;
						}
						aux = sol;
					}
					if(flag)break;
				}
			}
			if(flag)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
	else{
		if(s.size() < 10){
			cout<<"NO"<<endl;
		}
		else{
			flag = false;
			for(int i=0; i< s.size()-9; i++){
				if(s[i] == 'C' && s[i+1] == 'O' && s[i+2] == 'D' && s[i+3] == 'E' && s[i+4] == 'F' && s[i+5] == 'O' && s[i+6] == 'R' && s[i+7] == 'C' && s[i+8] == 'E' && s[i+9] == 'S'){
					flag = true;
					break;
				}
			}
			if(flag)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}

	}

	return 0;
}