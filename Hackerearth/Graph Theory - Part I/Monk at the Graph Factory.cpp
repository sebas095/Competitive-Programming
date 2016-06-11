#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	fast;
	int nodes,degree,ans = 0;
	cin>>nodes;
	for(int i=0; i<nodes; i++){
		cin>>degree;
		ans += degree;
	}
	nodes--;
	ans >>= 1;
	(ans == nodes)? cout<<"Yes"<<endl : cout<<"No"<<endl;

	return 0;
}