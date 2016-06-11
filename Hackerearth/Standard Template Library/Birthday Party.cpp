#include <bits/stdc++.h>
#define endl '\n'
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main(){
	fast;
	int t, n;
	string s;
	cin>>t;

	while(t--){
		set<string>::iterator it;
		set<string> lists;
		cin>>n;
		while(n--){
			cin>>s;
			lists.insert(s);
		}
		for(it = lists.begin(); it != lists.end(); ++it){
			cout<<*it<<endl;
		}
	}
	return 0;
}