#include <bits/stdc++.h>

using namespace std;

double event[5006];

double expectedValue(int posLimit){
	for(int i = posLimit-1; i >= 0; i--){
		event[i] = 1;
		for(int j = 1; j <= min(posLimit - i, 10); j++)
			event[i] += event[i+j] * (1.0/min(posLimit - i, 10));
	}

	return event[0];
}

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int t, pos;
	cin>>t;
	while(t--){
		memset(event,0,sizeof(event));
		cin>>pos;
		cout<<fixed<<setprecision(10)<<expectedValue(pos)<<endl;
	}
	return 0;
}