#include <bits/stdc++.h>

using namespace std;
 
int main(){
	int a,b,c,discriminante;
	cin>>a>>b>>c;
	discriminante = b*b-4*a*c;
	if(discriminante >= 0)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}