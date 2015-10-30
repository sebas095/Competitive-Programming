#include <bits/stdc++.h>

using namespace std;

string toStr(int x){
	stringstream ss;
	ss << x;
	return ss.str();
}

int toInt(string x){
	stringstream ss;
	ss << x;
	int r;
	ss >> r;
	return r;
}


string binary(int t){
	int n = t, ans = 0;
	string s;
	while(n > 0){
		s += toStr(n%2);
		n >>=1;
	}
	s = string(s.rbegin(), s.rend());
	return s;
}

int main(){
	int t;
	cin>>t;
	cout<<t<<" : "<<binary(t)<<endl;
	return 0;
}