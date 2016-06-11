#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	double PI = 3.1415926536,sum=0;
	cin>>n;
	long rad[n+1];
	rad[0]=0;
	for(int i=1; i<=n; i++)cin>>rad[i];
	sort(rad,rad+n+1);
	for(int i=n; i>0; i-=2){
		sum += rad[i]*rad[i] - rad[i-1]*rad[i-1];
	}
	sum *= PI;
	printf("%.10lf\n",sum);

	return 0;
}