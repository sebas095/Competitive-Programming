#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main(){
	int t,n=0;
	cin>>t;
	while(t--){
		string sound="",aux1="",aux2="",aux3="",aux4="",aux5="",auxanimal="",auxread="",ans="";
		map<string, bool> animal;
		vector <string> solve;
		if(n > 0){
			cin.ignore(1,' ');
			getline(cin,sound);
		}
		if(n==0){
			n++;
			cin.ignore(1,' ');
			getline(cin,sound);
		}
		for(int i=0; i<sound.size(); i++){
			if(sound[i] != ' '){
				auxread += sound[i];
			}
			else{
				animal[auxread] = false;
				auxread = "";
			}
		}
		while(cin>>aux1>>aux2){
			if(aux1 == "what"){
				cin>>aux3>>aux4>>aux5;
				break;
			}
			cin>>auxanimal;
			animal[auxanimal] = true;
		}
		sound += " ";
		for(int i=0; i<sound.size(); i++){
			if(sound[i] != ' '){
				ans += sound[i];
			}
			else{
				if(!animal[ans]){
					solve.push_back(ans);
				}
				ans = "";
			}
		}
		for(int i=0; i<solve.size(); i++){
			cout<<solve[i];
			if(i < solve.size()-1){
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;	
}