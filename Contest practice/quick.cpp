#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int toInt(string &x){
	stringstream ss;
	ss << x;
	int r;
	ss >> r;
	return r;
}

int main(){
	fast;
	string s;
	int n;
	getline(cin,s);
	n = toInt(s);
	while(n--){
		vector<int> alp(26,0);
		string ans;
		getline(cin,s);
		for(int i=0; i<s.size(); i++){
			if(isalpha(s[i])){
				alp[tolower(s[i])-'a']++;
			}
		}

		for(int i=0; i<26; i++){
			if(alp[i] == 0){
				ans += (i +'a');
			}
		}

		if(ans.size() > 0){
			cout<<"missing "<<ans<<endl;
		}
		else{
			cout<<"pangram"<<endl;
		}
	}
	return 0;
}