#include <bits/stdc++.h>

using namespace std;

int main(){
	int cases;
	cin>>cases;
	int n,m;
	while(cases--){
		long long int tot=1;
		cin>>n>>m;
		for(int i=n; i<=m; i++){
			tot+=i*(i+1)*(i+2);
		}
		tot=(tot%100)-1;
		cout<<tot<<endl;
	}
	return 0;
}