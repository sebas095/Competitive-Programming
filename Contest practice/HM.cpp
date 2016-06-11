#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main(){
    fast;
	int n;
	while(cin>>n && n){
	    cout<<ceil(sqrt((double)n))<<endl;
	}
	return 0;
}