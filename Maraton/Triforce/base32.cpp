#include <bits/stdc++.h>

using namespace std;

int toInt(string x){
	stringstream s;
	 s << x;
  	int r;
   	s >> r;
	return r;
}

 string toStr(int x){
 	stringstream s;
 	s << x;
 	return s.str();
}

string binary(int n){
	string ans = "";
	while(n > 0){
		ans += toStr(n%2);
		n = n/2;
	}
	if(ans.size()<8){
		int aux = 8-ans.size();
		while(aux--){
			ans += "0";
		}
	}
	ans = string(ans.rbegin(),ans.rend());
	return ans;
}

char table(string s){
	if(s == "00000") return '!';
	if(s == "00001") return '@';
	if(s == "00010") return '#';
	if(s == "00011") return '$';
	if(s == "00100") return '%';
	if(s == "00101") return '&';
	if(s == "00110") return 'a';
	if(s == "00111") return 'b';
	if(s == "01000") return 'c';
	if(s == "01001") return 'd';
	if(s == "01010") return 'e';
	if(s == "01011") return 'f';
	if(s == "01100") return 'g';
	if(s == "01101") return 'h';
	if(s == "01110") return 'i';
	if(s == "01111") return 'j';
	if(s == "10000") return 'k';
	if(s == "10001") return 'l';
	if(s == "10010") return 'm';
	if(s == "10011") return 'n';
	if(s == "10100") return 'o';
	if(s == "10101") return 'p';
	if(s == "10110") return 'q';
	if(s == "10111") return 'r';
	if(s == "11000") return 's';
	if(s == "11001") return 't';
	if(s == "11010") return 'u';
	if(s == "11011") return 'v';
	if(s == "11100") return 'w';
	if(s == "11101") return 'x';
	if(s == "11110") return 'y';
	if(s == "11111") return 'z';
}

int main(){
	//cout<<binary(3)<<endl;
	int n,cont;
	string ans="",aux="",tab="",solve="";
	while(cin>>n){
		aux = binary(n);
		ans += aux;
	}
	int acum = 5 - ans.size()%5;
	if(ans.size()%5 != 0){
		while(acum--){
			ans += "0";
		}
	}
	for(int i=0; i<ans.size(); i+=5){
		tab = ans.substr(i,5);
		solve += table(tab);
	}
	for(int i=0,k=1; i<solve.size(); i++,k++){
		cout<<solve[i];
		if(k==80 || i==solve.size()-1){
			k=0;
			cout<<endl;
		}
	}
	return 0;
}