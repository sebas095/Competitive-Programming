#include <bits/stdc++.h>

using namespace std;
 
 #define MAXNODES 1000

int toInt(string &x){
	stringstream s;
	s<<x;
	int r;
	s>>r;
	return r;
}

string toStr(int &x){
	stringstream s;
	s<<x;
	return s.str();
}

int main(){
	int n,p;
	while(cin>>n && n!=0){
		cin>>p;
		vector <int> pag(3);
		if(p%2==0){
			pag[0]=p-1;
			pag[1]=n-p+1;
			pag[2]=n-p+2;
			sort(pag.begin(),pag.end());
		}
		else{
			pag[0]=n-p;
			pag[1]=n-p+1;
			pag[2]=p+1;
			sort(pag.begin(),pag.end());
		}
		cout<<pag[0]<<" "<<pag[1]<<" "<<pag[2]<<endl;
	}
	return 0;
}