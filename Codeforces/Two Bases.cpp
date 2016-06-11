#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	fast;
	int b1,n1,b2,n2,x;
	long long ans1 = 0, ans2 = 0;
	
	cin>>n1>>b1;
	for(int i=0; i<n1; i++){
		cin>>x;
		ans1 = (ans1*b1) + x;
	}
	
	cin>>n2>>b2;
	for(int i=0; i<n2; i++){
		cin>>x;
		ans2 = (ans2*b2) + x;
	}

	if(ans1 == ans2) cout<<"="<<endl;
	else{
		if(ans1 < ans2)
			cout<<"<"<<endl;
		else
			cout<<">"<<endl;
	}

	return 0;
}