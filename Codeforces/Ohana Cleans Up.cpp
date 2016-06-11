#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main(){
	int n, ans = 0;
	map<string, int> cleans;
	map<string,int>::iterator it;
	cin>>n;
	string s[n];
	for(int i=0; i<n; i++){
		cin>>s[i];
	}
	for(int i=0; i<n; i++){
		cleans[s[i]] += 1;
	}
	for(it = cleans.begin(); it != cleans.end(); ++it){
		if(it -> second > ans){
			ans = it -> second;
		}
	}

	cout<<ans<<endl;

	return 0;
}