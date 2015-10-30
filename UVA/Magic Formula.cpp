#include <bits/stdc++.h>

using namespace std;

int main(){
	long long a,b,c,d,l,cont=0,ecuacion=0;
	while(cin>>a>>b>>c>>d>>l){
		cont=0;
		ecuacion=0;
		if(a==0 && b==0 && c==0 && d==0 && l==0)break;
		for(int i=0; i<=l; i++){
			ecuacion = a*(i*i)+(b*i)+c;
			if(ecuacion%d == 0)cont++;
		}
		cout<<cont<<endl;
	}
	return 0;
}