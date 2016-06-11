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
	string msj,prev,next,ans;
	cin>>n;
	for(int i=1; i<=n; i++){
		ans = prev = next = "";
		if(i < 2)cin.ignore(1,' ');
		getline(cin,msj);
		for(int j=0; j<msj.size(); j++){
			if(next == prev && next != "")ans+=" ";
			ans += texto[msj[j]];
			prev = texto[msj[j]][0];
			if(j < msj.size()-1) next=texto[msj[j+1]][0];
		}
		cout<<"Case #"<<i<<": "<<ans<<endl;
	}
	return 0;
}