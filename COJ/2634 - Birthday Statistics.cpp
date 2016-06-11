#include <bits/stdc++.h>

using namespace std;

int toInt(string &x){
	stringstream s;
	s<<x;
	int r;
	s>>r;
	return r;
}

int main(){
	int cases;
	cin>>cases;
	vector <int> meses(13,0);
	int ID;
	string fecha;
	while(cases--){
		string mes;
		cin>>ID>>fecha;
		if(fecha[1] == '/'){
			mes+=fecha[2];
			if(fecha[3] != '/')mes+=fecha[3];
		}
		else{
			mes+=fecha[3];
			if(fecha[4] != '/')mes+=fecha[4];
		}
		//cout<<toInt(mes)<<endl;
		meses[toInt(mes)]+=1;
		mes="";
	}
	for(int i=1; i<=12; i++){
		cout<<i<<" "<<meses[i]<<endl;
	}
	return 0;
}