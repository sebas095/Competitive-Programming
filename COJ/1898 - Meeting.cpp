#include <bits/stdc++.h>

using namespace std;

int main(){
	int cases;
	cin>>cases;
	while(cases--){
		double velA,velB,D,tim=0;
		cin>>velA>>velB>>D;
		tim=D/(velA+velB);
		printf("%.4lf\n",tim);
	}
	return 0;
}