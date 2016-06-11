#include <bits/stdc++.h>

using namespace std;

int main(){
	int cases;
	cin>>cases;
	int k;
	for(int j=1; j<=cases; j++){
		int igu=0,dif=0;
		cin>>k;
		vector <int> calc(k);
		for(int i=0; i<k; i++)cin>>calc[i];
		igu=k+1;
		sort(calc.begin(),calc.end());

		dif=calc[calc.size()-1]+1;
		cout<<"Case "<<j<<": "<<igu<<" "<<dif<<endl;
	}
	return 0;
}