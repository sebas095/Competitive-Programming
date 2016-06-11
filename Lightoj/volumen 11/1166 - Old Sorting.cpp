#include <bits/stdc++.h>

using namespace std;

//1166 - Old Sorting
//http://lightoj.com/volume_showproblem.php?problem=1166

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	int t;
	cin>>t;
	for(int casos=1; casos<=t; casos++){
		int swaps = 0,n,a,aux1=0;
		cin>>n;
		int ans[n], part[n];
		for(int i=0; i<n; i++){
			cin>>a;
			ans[i] = a-1;
			part[a-1] = i;
		}
		for(int i=0; i<n; i++){
			if(ans[i] != i){
				aux1 = ans[i];
				swap(ans[part[i]],ans[i]);
				swap(part[aux1],part[i]);
				swaps++;
			}
		}
		cout<<"Case "<<casos<<": "<<swaps<<endl;

	}
	return 0;
}