#include <bits/stdc++.h>

using namespace std;

int toInt(string x){
	stringstream s;
	 s << x; int r;
	 s >> r;
	 return r;
	}

string toStr(int x){
	stringstream s;
	s << x;
	return s.str();
}

int main(){
	vector <string> n(1000000005),luck(1000000005,0);
	string aux;
	bool flag = true;
	for(int i=0; i<n.size(); i++){
		n[i] = toStr(i);
	}
	for(int i=0; i<n.size(); i++){
		for(int j=0; j<n[i].size(); i++){
			if(n[i][j] != '4' || n[i][j] != '7'){
				flag = false;
			}
		}
		if(flag){
			luck[i] = 1;
			flag = false;
		}
	}

	return 0;
}