#include <bits/stdc++.h>

using namespace std;

#define D(x) cout<<"Case "<<x<<":"<<endl

int main(){
	string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int t;
	cin>>t;
	for(int cases=1; cases<=t; cases++){
		int n,k;
		cin>>n>>k;
		string alp = alphabet.substr(0,n);
		D(cases);
		do {
	        cout << alp << '\n';
	        k--;
	    } while(next_permutation(alp.begin(), alp.end()) && k);
	}
	return 0;
}