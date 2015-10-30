#include <bits/stdc++.h>
#define EPS 1e-8

using namespace std;

//http://lightoj.com/volume_showproblem.php?problem=1062
//1062 - Crossed Ladders

double width(double x, double y, double c){
	double l,r,new_width,m;
	l = 0;
	r = min(x,y);
	while(true){
		m = (r-l)/2 + l;
		new_width = sqrt(x*x-m*m)*sqrt(y*y-m*m)/(sqrt(x*x-m*m)+sqrt(y*y-m*m));
		if(fabs(new_width-c) <= EPS)
			return m;
		if(new_width > c)
			l = m;
		else
			r = m;
	}
}

int main(){
	/*ios_base::sync_with_stdio(0); 
	cin.tie(NULL);*/
	int t;
	scanf("%d",&t);
	for(int k=1; k<=t; k++){
		double x,y,c, ans;
		scanf("%lf %lf %lf",&x,&y,&c);
		ans = width(x,y,c);
		printf("Case %d: %.10lf\n",k,ans);
	}
	return 0;
}