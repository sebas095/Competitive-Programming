#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

bool isNumber(const string &s){
	if(s == "0") return true; 
	if(s.empty() || (s[0] == '0' && s.size() > 1)) return false;
	for(auto &si : s){
		if(si < '0' || si > '9')
			return false;
	}
	return true;
}

vector<string> extract(const string &s){
	vector<string> ans;
	string token;
	for(auto &i : s){
		if(i != ',')
			token += i;
		else{
			ans.push_back(token);
			token = "";
		}
	}
	ans.push_back(token);
	return ans;
}

ostream& operator << (ostream& out, vector<string> &s){
	if(s.empty())
		out << "-";
	else{
		out << '"' << s[0];
		for(int i=1; i<s.size(); i++){
			out << "," << s[i];
		}
		out << '"';
	}
	return out;
}

int main(){
	fast;
	string s;
	cin>>s;
	replace(s.begin(), s.end(),';',',');

	vector<string> num, alph;
	vector<string> split = extract(s);

	for(int i=0; i<split.size(); i++){
		if(isNumber(split[i])){
			num.push_back(split[i]);
		}
		else{
			alph.push_back(split[i]);
		}
	}
	cout << num << endl;
	cout << alph << endl;
	return 0;
}