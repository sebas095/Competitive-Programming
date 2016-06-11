#include <bits/stdc++.h>
#define LIM 100006

using namespace std;

struct trie {

	struct Node {
		int edges[62];
		int c;
	};

	Node arr[LIM];
	int tot_nodes;

	void clear(){
		memset(arr[tot_nodes].edges, -1, sizeof(arr[tot_nodes].edges));
		arr[tot_nodes].c = 0;
		tot_nodes++;
	}

	void init(){
		tot_nodes = 0;
		clear();
	}

	int query(string &s, bool a){
		int root = 0;
		for(int i=0; i<s.size(); ++i){
			if(arr[root].edges[s[i]-'A'] == -1){
				if(!a)return 0;
				arr[root].edges[s[i]-'A'] = tot_nodes;
				clear();
			}
			root = arr[root].edges[s[i]-'A'];
		}
		if(a)arr[root].c++;
		return arr[root].c;
	}
};

string convert(string s){
	string x = s;
	sort(x.begin()+1,x.end()-1);
	return x;
}

trie tree;

int next_int() {
  string buffer;
  getline(cin, buffer);
  return atoi(buffer.c_str());
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, lines;
	string input;
	t = next_int();
	for(int k=0; k<t; k++){
		n = next_int();
		tree.init();
		string tmp;

		while(n--){
			getline(cin, tmp);
			if(tmp.size()>2)tmp = convert(tmp);
			tree.query(tmp,true);
		}

		lines = next_int();
		int ans = 1;
		cout<<"Case "<<k+1<<":\n";
		while(lines--){
			ans = 1;
			string aux, aux2;
			getline(cin,aux);
			stringstream ss(aux);
			while(ss >> aux){
				if(aux.size() > 2)aux = convert(aux);
				ans *= tree.query(aux, false);
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}