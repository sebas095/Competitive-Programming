#include <bits/stdc++.h>

using namespace std;
 
int main(){
	double x,y;
	while(cin>>x>>y){
		if(x>0 && y>0){
			cout<<"Q1"<<endl;
			continue;
		}
		if(x<0 && y>0){
			cout<<"Q2"<<endl;
			continue;
		}
		if(x<0 && y<0){
			cout<<"Q3"<<endl;
			continue;
		}
		if(x>0 && y<0){
			cout<<"Q4"<<endl;
			continue;
		}
		else{
			cout<<"AXIS"<<endl;
			continue;
		}
	}
	return 0;
}