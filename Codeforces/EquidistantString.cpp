#include <bits/stdc++.h>
#define endl '\n'

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

int main(){
	string s,t,ans="";
	int cont = 0;
	cin>>s>>t;
	for(int i=0; i<s.size(); i++){
		if(s[i] == t[i])ans += "0";
		else if(cont > 0){
			ans += s[i];
			cont--;
		}
		else{
			ans += t[i];
			cont++;
		}
	}
	if(cont)cout<<"impossible"<<endl;
	else cout<<ans<<endl;
	return 0;
}