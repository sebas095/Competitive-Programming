#include <bits/stdc++.h>

using namespace std;

int main(){
	vector <int> v(3,0);
	int a=0,b=0,c=0;
	while(true){
		a=b=c=0;
		cin>>a>>b>>c;
		if(a == 0 && b == 0 && c == 0)break;
		
		v[0]=a;
		v[1]=b;
		v[2]=c;

		sort(v.begin(),v.end());

		a=v[0];
		b=v[1];
		c=v[2];

		a=a*a;
		b=b*b;
		c=c*c;

		if((a+b) == c)cout<<"right"<<endl;
		else cout<<"wrong"<<endl;
	}

	return 0;
}