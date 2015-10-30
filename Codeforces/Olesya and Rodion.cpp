#include <bits/stdc++.h>

using namespace std;

string toStr(int &x){
	stringstream ss;
	ss << x;
	return ss.str();
}

int toStr(string &x){
	stringstream ss;
	ss << x;
	int r;
	ss >> r;
	return r;
}

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int n,t;
	cin>>n>>t;
	if(n == 1 && t == 10){
		cout<<"-1"<<endl;
		return 0;
	}
	string ans = toStr(t);
	while(ans.size() != n)ans += '0';
	cout<<ans<<endl;
	return 0;
}