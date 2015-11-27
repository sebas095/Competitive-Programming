#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

string s;

bool isequal(){
	for(int i=1; i<s.size(); i++){
		if(s[i-1] != s[i])
			return false;
	}
	return true;
}

bool matching(int l1, int r1, int l2, int r2){
	int cant1 = r1 - l1 + 1;
	int cant2 = r2 - l2 + 1;
	l1--;l2--;

	string s1 = s.substr(l1,cant1);
	string s2 = s.substr(l2,cant2);

	return (s1 == s2); 
}

int main(){
	fast;
	int queries,l1,r1,l2,r2;
	cin>>s>>queries;
	bool equal = isequal();
	while(queries--){
		cin>>l1>>r1>>l2>>r2;
		if(equal){
			int cant1 = r1 - l1 + 1;
			int cant2 = r2 - l2 + 1;
			(cant1 == cant2)? cout<<"Yes"<<endl : cout<<"No"<<endl;
		}
		else
			(matching(l1,r1,l2,r2))? cout<<"Yes"<<endl : cout<<"No"<<endl;	
	}
	return 0;
}