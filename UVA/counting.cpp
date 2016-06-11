#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

bool isNumber(char c){
	if(c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9' )
		return true;
	return false;
}

bool isOp(char c){
	if(c == '+' || c == '-' || c == '*' || c == '/')
		return true;
	return false;
}

bool isVar(char c){
	char start = 'a';
	char end = 'z';
	if(c >= start && c <= end)
		return true;
	return false;
}

bool isParent(char c){
	if(c == '(' || c == ')')
		return true;
	return false;
}

string convert_to_expr(string s){
	string s2;
	for(int i=0; i<s.size(); i++){
		if(isVar(s[i])){
			s2 += '0';
		}
		if(isOp(s[i])){
			s2 += '+';
		}
		if(isParent(s[i])){
			s2 += s[i];
		}
		if(isNumber(s[i])){
			while(isNumber(s[i])){
				i++;
			}
			i--;
			s2 += '0';
		}
	}
	return s2;
}

// KMP
void kmp(const string &needle, const string &haystack){
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
			//count++;
			sol++;
			seen = border[m - 1];
			
		}
	}
	//cout<<seen<<endl;
	
	cout << sol << endl;
}

int main(){
	string s1,s2;
	while(cin>>s1>>s2){
		string expr1,expr2;
		expr1 = convert_to_expr(s1);
		expr2 = convert_to_expr(s2);
		//cout << expr1 << endl << expr2 << endl;
		//cout<<expr1<<endl;
		//cout<<expr2<<endl;
		kmp(expr1,expr2);
	}
	return 0;
}