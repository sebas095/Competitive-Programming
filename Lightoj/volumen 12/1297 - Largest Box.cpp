#include <bits/stdc++.h>

using namespace std;

#define D(x,ans) cout<<"Case "<<x<<": "<<fixed<<setprecision(15)<<ans<<endl
#define EPS 1e-9

double L,W;

int compare(double x, double y){
	if(x <= y+EPS){
		if(x+EPS < y)return -1;
		return 0;
	}
	return 1;
}

double function(double x){
	return (L-2.0*x)*(W-2.0*x)*x;
}

double ternarySearch(){
	double lo,hi;
	lo = 0, hi = min(L,W)*0.5;
	while(compare(lo,hi) == -1){
		double mid1 = (2*lo + hi)/3.0;
		double mid2 = (2*hi + lo)/3.0;
		
		double tmp1 = function(mid1);
		double tmp2 = function(mid2);

		if(compare(tmp1,tmp2) == -1)
			lo = mid1;
		else
			hi = mid2;
	}
	return function(lo);
}

int main(){
	int t;
	cin>>t;
	for (int k = 1; k <= t; k++){
		cin>>L>>W;
		double ans = ternarySearch();
		D(k,ans);
	}
	return 0;
}