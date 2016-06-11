#include <bits/stdc++.h>

using namespace std;


int main(){
	int cont=0;
	vector<int> num(10);
	vector<bool> num2(43,false);
	for(int i=0; i<10; i++)cin>>num[i];
	for(int i=0; i<10; i++){
		num[i]=num[i]%42;
	}
	for(int i=0; i<10; i++){
		if(num2[num[i]]==false){
			cont++;
			num2[num[i]]=true;
		}
	}
	cout<<cont<<endl;
	return 0;
}