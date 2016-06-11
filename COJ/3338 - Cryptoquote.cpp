#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

string cryptoquote(string s, string alph){
	map<char, char> decode;
	char it = 'A';
	string ans = "";
	for(int i=0; i<alph.size(); i++){
		decode[it] = alph[i];
		it++;
	}
	decode[' '] = ' ';
	for(int i=0; i<s.size(); i++){
		ans += decode[s[i]];
	}
	return ans;
}

int main(){
	int n;
	string s,alph;
	cin>>n;
	for(int i=1; i<= n; i++){
		cin.ignore(1,'\n');
		getline(cin,s);
		cin>>alph;
		cout<<i<<" "<<cryptoquote(s,alph)<<endl;
	}
	return 0;
}
