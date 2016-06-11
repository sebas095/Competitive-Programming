#include <bits/stdc++.h>

using namespace std;


int main(){
	int t;
	cin >> t;
	for (int k = 0; k < t; k++){
		int n, term, sum = 0, cont = 0;
		cin>>n;
		for(int i=0; i<n; i++){
			cin >> term;
			sum += abs(term);
			if(term < 0)cont++;
		}

		int den = __gcd(sum,n-cont);
		cout<<"Case "<<k+1<<": ";
		(n-cont)? cout<<sum/den<<"/"<<(n-cont)/den<<endl : cout<<"inf\n";

	}
	return 0;
}