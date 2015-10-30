#include <bits/stdc++.h>

using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		double x1,y1,x2,y2,x3,y3,a,b,c,s, A = 0, I = 0;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;

		a = floor(sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
		b = floor(sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3)));
		c = floor(sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3)));

		s = floor((a+b+c)/2);
		A = floor(sqrt(s*(s-a)*(s-b)*(s-c)));

		I = A - 0.5;
		cout<<a<<" "<<b<<" "<<c<<" "<<s<<" "<<A<<" "<<ceil(I)<<endl;
		
	}
	return 0;
}