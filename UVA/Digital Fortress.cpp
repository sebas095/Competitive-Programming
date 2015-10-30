#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	bool flag = false;
	while(n--){
		if (!flag)cin.ignore(1, '\n');
		else cin.ignore(0, '\n');
		getline(cin,s);
		flag = true;
		int longitud = s.size();
		longitud = (int)(sqrt(longitud));
		if(longitud*longitud != s.size()){
			cout<<"INVALID"<<endl;
		}
		else{
			char msj[longitud][longitud];
			int aux = 0;
			for(int i=0; i<longitud; i++){
				for(int j=0; j<longitud; j++){
					msj[i][j]=s[aux];
					aux++;
				}
			}
			for(int i=0; i<longitud; i++){
				for(int j=0; j<longitud; j++){
					cout<<msj[j][i];
				}
			}
			cout<<endl;
		}
	}
	return 0;
}
