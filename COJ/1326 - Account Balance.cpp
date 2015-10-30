#include <bits/stdc++.h>

using namespace std;

int main(){
	int cases;
	cin>>cases;
	int init_balance,balance;
	int trans;
	string s;
	while(cases--){
		cin>>init_balance>>trans;
		for(int i=0; i<trans; i++){
			cin>>s>>balance;
			if(s=="C")init_balance+=balance;
			else init_balance-=balance;
		}
		cout<<init_balance<<endl;
	}
	return 0;
}