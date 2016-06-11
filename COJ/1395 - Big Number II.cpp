#include <bits/stdc++.h>

using namespace std;

#define MAXN 10000001
double a[MAXN];

int main(){
	a[0]=0;
	for(int i=1; i<=MAXN; i++)
		a[i]=a[i-1]+log(i+0.0);

	int cases;
	cin>>cases;
	while(cases--){
		int n;
		cin>>n;
		printf("%.0lf\n",floor(a[n]/log(10) +1));
	}
	return 0;
}