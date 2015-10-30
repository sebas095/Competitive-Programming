#include <bits/stdc++.h>

using namespace std;

void llenarMap(map<char,string> &texto){
	texto['a'] = "2";
 	texto['b'] = "22";
 	texto['c'] = "222";
 	texto['d'] = "3";
 	texto['e'] = "33";
 	texto['f'] = "333";
 	texto['g'] = "4";
 	texto['h'] = "44";
 	texto['i'] = "444";
 	texto['j'] = "5";
 	texto['k'] = "55";
 	texto['l'] = "555";
 	texto['m'] = "6";
 	texto['n'] = "66";
 	texto['o'] = "666";
 	texto['p'] = "7";
 	texto['q'] = "77";
 	texto['r'] = "777";
	texto['s'] = "7777";
 	texto['t'] = "8";
 	texto['u'] = "88";
 	texto['v'] = "888";
 	texto['w'] = "9";
 	texto['x'] = "99";
 	texto['y'] = "999";
 	texto['z'] = "9999";
 	texto[' '] = "0";

}

int main(){
	map<char,string> texto;
	llenarMap(texto);
	int n;
	string msj,prev,next,ans,solve;
	cin>>n;
	for(int i=1; i<=n; i++){
		solve = ans = "";
		if(i < 2)cin.ignore(1,' ');
		getline(cin,msj);
		for(int j=0; j<msj.size(); j++){
			ans += texto[msj[j]];
			if(j<msj.size()-1)ans+=" ";
		}
		for(int j=0; j<ans.size(); j++){
			if(ans[j] != ' ')solve+=ans[j];
			if(ans[j]==ans[j+2] && j<ans.size()-2 && ans[j+1] == ' ')solve+=" ";
		}
		cout<<"Case #"<<i<<": "<<solve<<endl;
	}
	return 0;
}