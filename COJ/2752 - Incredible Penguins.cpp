//2752 - Incredible Penguins
//http://coj.uci.cu/24h/problem.xhtml?abb=2752

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n, aux;
	string s;

	vector < pair<string, int> > pair;

	cin>>t;

	for(int i=0; i<t; i++){
		cin>>s>>n;

        pair.push_back( make_pair(s, n));
	}

	for(int i=0; i<t; i++){
		aux=pair[i].second*-1;

		for(int j=0; j<t; j++){
			if(pair[j].second==aux){
				pair[i].second=0;
				pair[j].second=0;

				j=t;
			}
		}
	}

	cout<<"FOREVER ALONE ones:"<<endl;

	for(int i=0; i<t; i++){
		if(pair[i].second != 0){
			cout<<pair[i].first<<endl;
		}
	}
	

	return 0;
}