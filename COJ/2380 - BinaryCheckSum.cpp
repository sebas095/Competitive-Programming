#include <bits/stdc++.h>

using namespace std;

string toStr(int x){
	stringstream s;
	s<<x;
	return s.str();
}

int toInt(string x){
	stringstream s;
	s<<x;
	int r;
	s>>r;
	return r;
}


string binario(string num){
	char aux = '0';
	int n = toInt(num);
	string bin;
	while(n > 0){
		bin+=toStr(n%2);
		n=n/2;
	}
	return bin;
}

int countOnes(string num){
	string n = binario(num);
	int cont=0;
	for(int i=0; i< n.size(); i++){
		if(n[i]=='1')cont++;
	}
	return cont;
}

int main(){
	int n,cont=0;
	string num,s;
	cin>>n;
	while(n--){
		cin>>num;
		cont+=countOnes(num);
	}
	cout<<cont<<endl;
	return 0;
}