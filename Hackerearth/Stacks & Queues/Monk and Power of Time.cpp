#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main(){
	fast;
	int n,ans,tmp,n2;
	cin>>n;
	n2 = n;
	ans = n;
	queue<int> ideal, calling;
	
	while(n--){
		cin>>tmp;
		calling.push(tmp);
	}

	while(n2--){
		cin>>tmp;
		ideal.push(tmp);
	}

	while(!ideal.empty() && !calling.empty()){
		if(ideal.front() == calling.front()){
			ideal.pop();
			calling.pop();
		}
		else{
			int aux = calling.front();
			calling.pop();
			calling.push(aux);
			ans++;
		}
	}

	cout<<ans<<endl;

	return 0;
}