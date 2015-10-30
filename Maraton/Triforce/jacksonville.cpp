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
	int k,n,cont=0;
	while(cin>>k>>n && k!= 0 && n !=0){
		cont = 0;
		vector <int> f(n);
		vector <bool> flag(k+1,false);
		for(int i=0; i<n; i++)cin>>f[i];
		sort(f.begin(),f.end());
		for(int i=0; i<n; i++){
			for(int j=1; j<=k; j++){
				if(j%f[i] == 0 && !flag[j]){
					cont++;
					flag[j]=true;
				}
			}
		}
		cout<<cont<<endl;
	}

	return 0;
}