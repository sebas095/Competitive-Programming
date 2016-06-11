#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,ind=0;
	double max=-1.0;
	cin>>n;
	vector<double>v(n,0);
	for(int i=0; i<n; i++)cin>>v[i];
	for(int i=0; i<n; i++){
		if(v[i] >= max){
			max=v[i];
			ind=i;
		}
	}
	cout<<ind+1<<endl;
	return 0;
}