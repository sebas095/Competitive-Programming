#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main(){
	fast;
	int a,b, nc = 1;
	while(cin>>a>>b && a+b){
		cout<<"Caso #"<<nc++<<": "<<ceil(sqrt((double)(a*a)+(double)(b*b)))<<endl;
	}
	return 0;
}