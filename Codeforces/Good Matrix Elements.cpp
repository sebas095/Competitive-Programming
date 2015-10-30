#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int element,sum=0;
	int middle=(n-1)/2;
	int lDiag=0,rDiag=n-1;
	for (int i = 0; i < n; ++i,rDiag--,lDiag++){
		for (int j = 0; j < n; ++j){
			cin>>element;
			if(i==middle){
				sum+=element;
			}
			else if(j==middle){
				sum+=element;
			}
			else if(j==lDiag && j==rDiag){
				sum+=element;
			}
			else if(j==lDiag || j==rDiag){
				sum+=element;
			}
		}
	}
	cout<<sum<<endl;
	return 0;
}