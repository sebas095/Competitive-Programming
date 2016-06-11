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

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,b,aux;
	bool flag = false;
	cin>>t;
	while(t--){
		aux = 0;
		flag = false;
		cin>>n;
		for (int i = 1; i < n; ++i){
			cin>>b;
			if(b != i && !flag){
				aux = i;
				flag = true;
			}
			
		}
		cout<<aux<<endl;
	}

	
	return 0;
}