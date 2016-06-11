#include <bits/stdc++.h>

using namespace std;

char toEntero(int n){
	return (char)(n+48);
}

int main(){
	int n,m,contn=0,contm=0;
	cin>>n>>m;
	vector<int> first(n),second(m);
	for(int i=0; i<n; i++)cin>>first[i];
	for(int i=0; i<m; i++)cin>>second[i];

	for(int i=0; i<n; i++)contn+=first[i];
	for(int i=0; i<m; i++)contm+=second[i];

	if(contn == contm)cout<<"tie";
	else{
	    if(contm > contn)cout<<"second win";
            else cout<<"first win";
	}
	cout<<endl;
	return 0;
}