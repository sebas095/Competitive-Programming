#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){
	int n;
	cin>>n;
	long long v[n];
	long long min=0,min2=0,max2=0,max=0,last=0,first=0;
	for(int i=0; i<n; i++)cin>>v[i];
	last = v[n-1];
	first = v[0];
	for(int i=0; i<n; i++){
		min = max = max2 = min2 = -1;
		if(i == n-1){
			min = max = 0;
			min = sqrt((v[i]-(v[i-1]))*(v[i]-(v[i-1])));
			max = sqrt((v[i]-first)*(v[i]-first));
		}
		else{
			min = sqrt((v[i]-(v[i+1]))*(v[i]-(v[i+1])));
			max = sqrt((v[i]-last)*(v[i]-last));
			if(i > 0){
				min2 = sqrt((v[i]-(v[i-1]))*(v[i]-(v[i-1])));
				max2 = sqrt((v[i]-first)*(v[i]-first));
				if(min2 < min && min2 > 0) min = min2; 
				if(max2 > max) max = max2;
			}
		}
		cout<<min<<" "<<max<<endl;
		
	}
	return 0;
}