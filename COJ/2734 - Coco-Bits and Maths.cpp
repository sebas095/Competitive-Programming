#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	int num,res=0;
	while(cin>>s>>num){
		if(s=="suma"){
			res+=num;
		}
		else res-=num;
	}
	cout<<"resultado: "<<res<<endl;
	return 0;
}