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

int main(int argc, char const *argv[]){
	int n;
	cin>>n;
	int a[n], ans[n];
	int aux = 1;
	for(int i=0; i<n; i++)cin>>a[i];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i != j){
				if(a[j] > a[i]){
					aux++;
				}
			}
		}
		ans[i] = aux;
		aux = 1;
	}

	for(int i=0; i<n; i++){
		cout<<ans[i];
		if(i < n-1)cout<<" ";
	}
	cout<<endl;
	return 0;
}