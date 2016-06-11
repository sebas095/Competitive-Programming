#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main(){
	fast;
	int q, c, tmp, typeF;
	cin>>q;
	stack<int> st;
	while(q--){
		cin>>typeF;
		if(typeF == 1){
			if(!st.empty()){
				cout<<st.top()<<endl;
				st.pop();
			}
			else
				cout<<"No Food"<<endl;
		}
		else{
			cin>>tmp;
			st.push(tmp);
		}
	}
	return 0;
}