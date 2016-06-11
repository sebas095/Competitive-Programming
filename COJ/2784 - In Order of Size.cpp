#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> v(n),v2(n);
	for (int i = 0; i < n; i++)cin>>v[i];
	sort(v.begin(),v.end());
	v2[0]=v[n-1];
	for (int i = 0; i < n-1; i++)v2[i+1]=v[i];
	for (int i = 0; i < n; i++){
		cout<<v2[i];
		if(i<n-1)cout<<" ";
	}
	cout<<endl;
	return 0;
}