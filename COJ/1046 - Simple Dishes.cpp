#include <bits/stdc++.h>

using namespace std;

char toEntero(int n){
	return (char)(n+48);
}

string base2(int n){
	string s;
	while(n>0){
		s.push_back(toEntero(n%2));
		n= n/2;
	}
	//s= string(s.rbegin(),s.rend());
	return s;
}

void solve(string ans){
	for(int i=0; i<ans.size(); i++){
		if(ans[i]=='1'){
			cout<<i;
			if(i!=ans.size()-1)cout<<" ";
		}
	}
}

int main(){
	int t,n;
	string ans;
	cin>>t;
	while(t--){
		cin>>n;
		solve(base2(n));
		//cout<<base2(n);
		cout<<endl;
	}
	return 0;
}