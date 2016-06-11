#include <bits/stdc++.h>
#define LIMIT 10000002

using namespace std;

vector<bool> used(LIMIT,false);
vector<long> primes;

void gen(){	
	used[2] = true;
	for(int i=3; i<LIMIT; i+=2)used[i] = true;

	for(int i = 3; i <= sqrt(LIMIT); i++){
		if(used[i]){
			for (int j = 3; i*j < LIMIT ; j+=2){
				used[i*j] = false;
			}
		}
	}

	for(int i=0; i<LIMIT; i++){
		if(used[i]){
			primes.push_back(i);
		}
	}
}


int conjeture(int a){
	int cont = 0;
	int aux = 0;
	for(int i=0; i<primes.size() && primes[i] <= a/2; i++){
		aux = a - primes[i];
		if(used[aux])cont++;
	}
	return cont;
}

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	gen();
	int t,a;
	cin>>t;
	for(int k=1; k<=t; k++){
		cin>>a;
		cout<<"Case "<<k<<": "<<conjeture(a)<<endl;
	}
	return 0;
}
