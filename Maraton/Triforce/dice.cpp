#include <bits/stdc++.h>
#define endl '\n'

using namespace std;



int main(){
	int gunnar,emma,ans1=0,ans2=0;
	for(int i=0; i<4; i++){
		cin>>gunnar;
		ans1 += gunnar;
	}	
	for(int i=0; i<4; i++){
		cin>>emma;
		ans2 += emma;
	}	
	if(ans1 > ans2){
		cout<<"Gunnar"<<endl;
	}
	else{
		if(ans2 > ans1){
			cout<<"Emma"<<endl;
		}
		else cout<<"Tie"<<endl;
	}
	return 0;
}