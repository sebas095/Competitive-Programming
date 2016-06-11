#include <bits/stdc++.h>
using namespace std;

#define FORMAT(x,ans) cout<<"Case "<<(int)x<<": "<<ans<<endl

int scarecrow(string &s){
	int ans = 0;
	for(int i=0; i<s.size(); i++){
		if(s[i] == '.'){
			ans++;
			i+=2;
		}
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int t;
	cin>>t;
	for(int casos=1; casos<=t; casos++){
		int n;
		string s;
		cin>>n>>s;
		FORMAT(casos,scarecrow(s));
	}
	return 0;
}