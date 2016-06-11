#include <bits/stdc++.h>

using namespace std;

string deleteSpaces(string s){
	string ans = "";
	for(int i=0; i<s.size(); i++){
		if(s[i] != ' '){
			ans += s[i];
		}
	}
	return ans;
}

int main(){
	int n;
	cin>>n;
	bool flag = false;
	int cases = 0;
	while(n--){
		string s1,s2;
		if (!flag)cin.ignore(1, '\n');
		else cin.ignore(0, '\n');
		flag = true;
		getline(cin,s1);
		getline(cin,s2);
		cout<<"Case "<<++cases<<": ";
		if(s1 == s2){
			cout<<"Yes"<<endl;
		}
		else{
			string ans1,ans2;
			ans1 = deleteSpaces(s1);
			ans2 = deleteSpaces(s2);
			if(ans1 == ans2){
				cout<<"Output Format Error"<<endl;
			}
			else cout<<"Wrong Answer"<<endl;
		}
	}
	return 0;
}