#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define LIMIT 100009

using namespace std;

struct Trie{
	
	struct Node{
		int edges[11];
		int c;
	};

	Node node[LIMIT];
	int tot_nodes;

	void clear(){
		memset(node[tot_nodes].edges,-1, sizeof(node[tot_nodes].edges));
		node[tot_nodes].c = 0;
		tot_nodes++;
	}

	void init(){
		tot_nodes = 0;
		clear();
	}

	bool push(const string &s){
		int root = 0;
		bool check = true;
		for(int i=0; i<s.size(); i++){
			int id = s[i]-'0';
			if(node[root].edges[id] == -1){
				node[root].edges[id] = tot_nodes;
				clear();
			}
			root = node[root].edges[id];
			if(node[root].c) check = false; //si ya fue insertada quiere decir que ya es prefijo
		}
		node[root].c++;
		//chequeamos que no hayan mas nodos despues del ultimo nodo insertado, 
		// de lo contrario existiria un prefijo
		for(int i=0; i<10; i++)	check = check && (node[root].edges[i] == -1);
		return check;
	}

};

int main(){
	fast;
	Trie tree;
	int t, listado;
	cin>>t;
	for(int k=0; k<t; k++){
		tree.init();
		bool check = true;
		cin>>listado;
		string s;
		while(listado--){
			cin>>s;
			if(check){
				check = check && tree.push(s);
			}
		}
		cout<<"Case "<<k+1<<": ";
		(check)? cout<<"YES\n" : cout<<"NO\n";
	}
	return 0;
}
