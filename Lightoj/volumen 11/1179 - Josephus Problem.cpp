#include <bits/stdc++.h>

using namespace std;

#define D(x,ans) cout<<"Case "<<x<<": "<<ans<<endl

int josephus(int n, int k) {
  if (n == 0) return 1;
  return (josephus(n - 1, k) + k) % n;
}

int main(){
	int t;
	cin>>t;
	for (int cases = 1; cases <= t; cases++){
		int n,k;
		cin>>n>>k;
		D(cases,josephus(n,k)+1);
	}
	return 0;
}