#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

string rotar(string s, int k, int l, int r){
	string aux = s.substr(l-1, r-l+1); // Rango del string donde se rotara
	string inicio = s.substr(0,l-1); // Primera parte del string que no sera rotada
	string fin = s.substr(r); // Parte final del string que no sera rotada
	
	return (inicio + aux.substr(aux.size() - k) + aux.substr(0,aux.size() - k) + fin);
}

int main(){
	fast;
	string s;
	long long queries, l, r, k;
	cin>>s>>queries;
	while(queries--){
		cin>>l>>r>>k;
		long long size = r - l + 1;
		k %= size;
		s = (s.size() > 1)? rotar(s, k, l, r) : s;
	}
	cout<<s<<endl;
	return 0;
}