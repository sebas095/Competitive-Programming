#include <bits/stdc++.h>
#define endl '\n'
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main(){
	fast;
	int n,m;
	cin>>n>>m;
	bool amb = false, imp = false;
	
	map<int, vector<int> > frec;
	vector<int> index(100009);
	vector<int> f(n), b(m);
	
	for(int i=0; i<n; i++){
		cin>>f[i];
		frec[f[i]].push_back(i+1);
	}

	for(int i=0; i<m; i++)cin>>b[i];

	for(int i=0; i<m; i++){
		vector<int> &aux = frec[b[i]];
		if(aux.empty()){
			imp = true;
			break;
		}
		if(aux.size() == 1){
			index[i] = aux[0];
		}
		else{
			amb = true;
		}
	}

	if(imp){
		cout<<"Impossible"<<endl;
	}

	else if(amb)
		cout<<"Ambiguity"<<endl;
	
	else{
		cout<<"Possible"<<endl;
		for(int i=0; i<m; i++){
			cout<<index[i];
			if(i < m-1)cout<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}