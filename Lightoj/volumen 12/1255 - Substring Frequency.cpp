#include <bits/stdc++.h>

using namespace std;

// KMP
int kmp(const string &needle, const string &haystack){
	int count = 0;
	int m = needle.size();
	vector<int> border(m);
	border[0] = 0;
	for(int i=1; i<m; i++){
		border[i] = border[i-1];
		while(border[i] > 0 && needle[i] != needle[border[i]]){
			border[i] = border[border[i]-1];
		}
		if(needle[i] == needle[border[i]]) border[i]++;
	}
	int n = haystack.size();
	int sol = 0;
	int seen = 0;
	for(int i=0; i<n; i++){
		while(seen > 0 && haystack[i] != needle[seen]){
			seen = border[seen - 1];
		}
		if(haystack[i] == needle[seen]) seen++;
		if(seen == m){
			sol++;
			seen = border[m - 1];
			
		}
	}
	return sol;
}

int main(){
	int t;
	cin>>t;
	for(int k=1; k<=t; k++){
		string a,b;
		cin>>a>>b;
		cout<<"Case "<<k<<": "<<kmp(b,a)<<endl;
	}
	return 0;
}