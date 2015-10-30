#include <bits/stdc++.h>
using namespace std;

#define NIL string::npos

//1039 - A Toy Company 
//http://lightoj.com/volume_showproblem.php?problem=1039

map <char, vector<char> > G;
vector <bool> visited;
vector<string> f1,f2,f3;

//Construimos el grafo
void init(){
	vector<char> aux(2);
	for(char it = 'a'; it <= 'z'; it++){
		if(it == 'a'){
			aux[0] = 'z';
			aux[1] = it+1;
		}
		else if(it == 'z'){
			aux[0] = it-1;
			aux[1] = 'a';
		}
		else{
			aux[0] = it-1;
			aux[1] = it+1;
		}
		G[it] = aux;
	}
}

//Buscamos si el source o target se encuentra en las palabras prohibidas
bool find(int index, char b, char c){
	if(f2[index].find(b) != NIL && f3[index].find(c) != NIL)
		return true;
	return false;
}

//Buscamos en todos los constraints si se encuentra el source o target
bool constraints(string s){
	char a = s[0], b = s[1], c = s[2];
	for(int i=0; i< f1.size(); i++){
		for(int j=0; j<f1[i].size(); j++){
			if(f1[i][j] == a){
				if(find(i,b,c)){
					return true;
				}
				else{
					break;
				}
			}
		}
	}
	return false;
}

int bfs(char source, char target){
	queue<pair<char, int> > q;
	q.push(make_pair(source,0));
	visited[source-'a'] = true;
	while(!q.empty()){
		pair<char, int> current = q.front();
		q.pop();
		if(current.first == target)return current.second;
		for(int i=0; i<G[current.first].size(); i++){
			char tmp = G[current.first][i];
			if(!visited[tmp-'a']){
				visited[tmp-'a'] = true;
				q.push(make_pair(tmp,current.second+1));
			}
		}
	}
}

//Visualizacion del grafo
void view(){
	map <char, vector<char> >::iterator it;
	for(it = G.begin(); it != G.end(); ++it){
		cout<<it->first<<": "<<(it->second)[0]<<" "<<(it->second)[1]<<endl;
	}
}

int main(){
	init();
	int t;
	cin>>t;
	for(int cases=1; cases<=t; cases++){
		f1.clear();
		f2.clear();
		f3.clear();
		int k, cost = 0, aux = 0;
		string source,target,a,b,c;
		cin>>source>>target>>k;
		for(int i=0; i<k; i++){
			cin>>a>>b>>c;
			f1.push_back(a);
			f2.push_back(b);
			f3.push_back(c);
		}

		cout<<"Case "<<cases<<": ";
		//Verificamos restricciones
		if(!constraints(source) && !constraints(target)){
			for(int i=0; i<3; i++){
				visited.assign(26,false); //Limipiamos en cada iteracion
				cost += bfs(source[i],target[i]);
			}
			cout<<cost<<endl;
		}
		else cout<<"-1"<<endl;

	}
	return 0;
} 
