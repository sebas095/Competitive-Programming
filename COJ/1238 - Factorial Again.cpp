#include <bits/stdc++.h>

using namespace std;

int toEntero(char n){
	return n-48;
}

int factorial(int n){
	if(n==1 || n==0)return 1;
	int fact=1;
	for(int i=2; i<=n; i++){
		fact*=i;
	}
	return fact;
}

int again(string s){
	int longi=s.size();
	int tot=0;
	for(int i=0; i<s.size(); i++){
		tot+=toEntero(s[i])*factorial(longi);
		longi--;
	}
	return tot;
}

int main(){
	string s;
	int n;
	while(cin>>s && s!="0"){
		n=0;
		n=again(s);
		cout<<n<<endl;
	}
	return 0;
}