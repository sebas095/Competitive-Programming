#include <bits/stdc++.h>

using namespace std;

int main(){
	double n,p,ans;
	while(cin>>n>>p){
		ans=0;
		ans=pow(p,1/n);
		printf("%.0lf\n",ans);
	}
	return 0;
}