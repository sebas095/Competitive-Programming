#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

void mediana(vector<double> &v){
	int n = v.size();
	if(n % 2){
		cout<< fixed << setprecision(1) << v[n/2] << endl;
	}
	else{
		double ans = (v[n/2 - 1] + v[n/2])/2;
		cout<< fixed << setprecision(1) << ans << endl;
	}
}

int main(){
	fast;
	int n;
	while(cin>>n && n){
		vector<double> v(n);
		for(int i=0; i<n; i++) cin>>v[i];
		sort(v.begin(), v.end());
		mediana(v);
	}
	return 0;
}