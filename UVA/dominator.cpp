#include <bits/stdc++.h>

using namespace std;

vector <bool> visited1(100, false);
vector <bool> visited2(100, false);
int matriz[100][100];

void dfs1(vector<int> &vec, int nodo, int n){
	visited1[nodo] = true;
	vec.push_back(nodo);
	for(int i = 0; i<n; i++){
		if(matriz[nodo][i] == 1 && !visited1[i]){
			dfs1(vec, i, n);
		}
	}
}

void dfs2(int node,vector<int> &forb, int prohibido, int n){
	visited2[node] = true;
	if(prohibido != 0){	
		forb.push_back(node);
		for (int i = 0; i < n; i++){
			if(matriz[node][i] == 1 && !visited2[i] &&  i != prohibido){
				dfs2(i, forb, prohibido, n);
			}
		}
	}
}

void renglon(int n){
	cout<<"+";
	for(int i=0; i<2*n-1; i++){
		cout<<"-";
	}
	cout<<"+"<<endl;
}

int main(){
	memset(matriz, -1, sizeof(matriz));
	int cases, n;
	cin>>cases;
	for (int k = 1; k <= cases; k++){	
		cin>>n;
		vector <int> v;	
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				cin>>matriz[i][j];
			}
		}
		visited1.clear();
		dfs1(v, 0, n);
		/*for(int i=0; i<v.size(); i++)cout<<v[i]<<" ";
		cout<<endl;
		vector<int> v2;
		dfs2(0, v2, 0, n);
		for(int i=0; i<v2.size(); i++)cout<<v2[i]<<" ";
		cout<<endl;*/
		int line[n];
		vector<int> v2;
		cout<<"Case "<<k<<":\n";
		for (int i = 0; i < v.size(); i++){
			memset(line, -1, sizeof(line));
			visited2.clear();
			v2.clear();
			dfs2(0, v2, v[i], n);
			/*for(int j=0; j<v.size(); j++){
				line[v[j]] = 1;
			}
			for(int j=0; j<v2.size(); j++){
				line[v2[j]] = 0;
			}
			renglon(n);
			for(int j=0; j<n; j++){
				cout<<"|";
				if(line[j] == 1)cout<<"Y";
				else cout<<"N";
			}
			cout<<"|"<<" ";*/
			for(int t=0; t<v.size(); t++)cout<<v[t]<<" ";
			cout<<"...";
			for(int t=0; t<v2.size(); t++)cout<<v2[t]<<" ";
			cout<<endl;
		}
		renglon(n);
	}

	return 0;
}