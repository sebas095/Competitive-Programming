#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main(){
	fast;
	long long t;
	cin>>t;
	long long n;
	string s;
	while(t--){
		cin>>n>>s;
		n %= s.size();

		for(long long i = s.size()-n; i < s.size(); i++)
			cout<<s[i];

		for(long long i = 0; i < s.size() - n; i++)
			cout<<s[i];

        cout<<endl;
    }
	return 0;
}