//http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3503
//1062 - Containers

#include <bits/stdc++.h>

using namespace std;

string inp;
stack<char> empty;//En caso de que el sea mayor al tope se incrementa el tamano de la pila
vector<stack<char> > containers;

int add_to_stack(int i) {
    for(int j = 0; j < containers.size(); j++) {
        if(inp[i] <= containers[j].top()) {
            containers[j].push(inp[i]);
            return 0;
        }
    }
    containers.push_back(empty);
    containers[containers.size() - 1].push(inp[i]);
    return 1;
}

int main(){
	int N, T = 0;
	while(cin>>inp && inp != "end"){
		T++;
		N = inp.size();
		containers.clear();
		int solve = 0;
		for(int i=0; i<N; i++){
			solve += add_to_stack(i);
		}
		cout<<"Case "<<T<<": "<<solve<<endl;
	}
	return 0;
}

