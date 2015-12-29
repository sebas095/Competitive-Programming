#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main(){
	fast;
	int t;
	cin>>t;
	string s;
	while(t--){
		cin>>s;
		string aux = s;
		vector<char> ans;
		ans.push_back(s[0]);
		for(int i=1; i<s.size(); i++)
			if(s[i] != ans.back())ans.push_back(s[i]);
		
		for(int i=0; i<ans.size(); i++)cout<<ans[i];
		cout<<endl;
	}
	return 0;
}