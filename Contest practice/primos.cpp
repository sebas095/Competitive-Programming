#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

vector<int> primes(1000005,0);

void sieve(){
	primes[2] = 1;
	for(int i=3; i<1000005; i+=2)
		primes[i] = 1;

	for(int i=3; i< sqrt(1000005); i++){
		for(int j=2; i*j < 1000005; j++){
			if(primes[i*j]){
				primes[i*j] = 0;
			}
		}
	}

	for(int i=1; i<1000005; i++){
		primes[i] += primes[i-1];
	}

}

int main(){
	fast;
	sieve();
	int a,b;
	while(cin>>a>>b && a+b){
		cout<<primes[b]-primes[a-1]<<endl;
	}
	return 0;
}