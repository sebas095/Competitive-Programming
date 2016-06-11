#include <bits/stdc++.h>
#define MAXN 1000010
#define PHI 0.57721566490153286060651209

using namespace std;

double Hn[MAXN];

// Hn = 1 + 1/2 + 1/3 + ... + 1/n
// n -> OO : Hn = PHI + LOG (n + 1/2) usarla para n > 1000000

void gen(){
	Hn[0] = 0;
	for(int i=1; i<MAXN; i++)
		Hn[i] = Hn[i-1] + (1.0/i);
}

int main(){
	gen();
	double ans;
	int t,n;
	cin>>t;
	for(int k=1; k<=t; k++){
		cin>>n;
		ans = (n <= 1000000)? ans = Hn[n] : PHI + log(n + 0.5);
		cout<<"Case "<<k<<": "<<fixed<<setprecision(10)<<ans<<endl;
	}
	return 0;
}