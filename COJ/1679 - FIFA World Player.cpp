#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string name;
	cin>>n;
	vector <pair <double, string> > jugadores;
	while(n--){
		double PA,PJ,G,A,TA,TR,aux=0.0;
		cin>>name;
		cin>>PA>>PJ>>G>>A>>TA>>TR;
		aux = log10(PA)+PJ+2*G+A-(TA+2*TR);
		jugadores.push_back(make_pair(aux,name));
	}
	sort(jugadores.begin(),jugadores.end());
	cout<<jugadores[jugadores.size()-1].second<<endl;
	return 0;
}