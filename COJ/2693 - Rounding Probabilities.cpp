#include <bits/stdc++.h>

using namespace std;


int main(){
	double num;
	int t;
	cin>>num>>t;
	if(t==1)printf("%.1lf\n",num);
	if(t==2)printf("%.2lf\n",num);
	if(t==3)printf("%.3lf\n",num);
	if(t==4)printf("%.4lf\n",num);
	if(t==5)printf("%.5lf\n",num);
	if(t==6)printf("%.6lf\n",num);
	return 0;
}