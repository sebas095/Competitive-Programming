#include <bits/stdc++.h>

using namespace std;

int toInt(char n){
	return n-48;
}

int cowMultiply(string a, string b){
	int total=0;
	for(int i=0; i<a.size(); i++){
		for(int j=0; j<b.size(); j++){
			total+=toInt(a[i])*toInt(b[j]);
		}
	}
	return total;
}

int main(){
	int resultado=0;
	string a,b;
	cin>>a>>b;
	resultado=cowMultiply(a,b);
	cout<<resultado<<endl;
	return 0;
}