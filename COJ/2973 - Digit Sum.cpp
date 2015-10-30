#include <bits/stdc++.h>

using namespace std;
 
 #define MAXNODES 1000

int toInt(string &x){
	stringstream s;
	s<<x;
	int r;
	s>>r;
	return r;
}

string toStr(int &x){
	stringstream s;
	s<<x;
	return s.str();
}


int main(){
	int a;

	while(cin>>a && a!=0){
		vector<int> v(a);
		for (int i = 0; i < a; ++i){
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		string num1,num2,num3;
		for (int i = 0; i < a; ++i){
			if(v[i]==0){
				num3+=toStr(v[i]);
				continue;
			}
			if(i%2 == 0)num1+=toStr(v[i]);
			else num2+=toStr(v[i]);
		}

		int n1,n2,sol;
		n1=toInt(num1);
		n2=toInt(num2);
		string new1,new2;
		new1+=num1[0];
		num1.erase(0,1);
		new2+=num2[0];
		num2.erase(0,1);
		if(n1<=n2){
		while(!num3.empty()){
			new1+=num3[0];
			num3.erase(0,1);
			if(!num3.empty())
			new2+=num3[0];
			num3.erase(0,1);
		}
		}else{
			while(!num3.empty()){
			new2+=num3[0];
			num3.erase(0,1);
			if(!num3.empty()){
				new1+=num3[0];
				num3.erase(0,1);}
			}
		}
		new1+=num1;
		new2+=num2;
		n1=toInt(new1);
		n2=toInt(new2);
		sol=n1+n2;
		cout<<sol<<endl;
		sol=n1=n2=0;
		num1="";
		num2="";
		new1="";
		new2="";
	}

	return 0;
}