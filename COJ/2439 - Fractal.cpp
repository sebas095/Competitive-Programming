#include <bits/stdc++.h>

using namespace std;

int main(){
	int cases;
	cin>>cases;
	int Lo,Lf,resp=0;
	while(cases--){
		cin>>Lo>>Lf;
		resp=floor((log(Lo)-log(Lf))/(log(3)-log(5)));
		cout<<resp<<endl;

	}
	return 0;
}