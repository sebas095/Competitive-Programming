#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main(){
	fast;
	int n, tmp, acc = 0;
	cin>>n;
	stack<int> st;
	while(n--){
		cin>>tmp;
		if(tmp)st.push(tmp);
		else if(!st.empty()){
			st.pop();
		}
		
	}

	while(!st.empty()){
		acc += st.top();
		st.pop();
	}
	cout<<acc<<endl;
	return 0;
}