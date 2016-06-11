#include <bits/stdc++.h>

using namespace std;
 
int main(){
	int n;
	int cont=1;
	while(cin>>n && n!=0){
		map <char,char> pal;
		map<string, vector<string> >pal2;
		map<string,vector<string> > ::const_iterator it;
		string alf;
		cin>>alf;
		vector<string>w(n),w2;
		for(int i=0; i<n; i++)cin>>w[i];
		w2=w;
		for(int k=0; k< alf.size(); k++){
			pal[alf[k]] =(char)(65+k);
		}
		for(int i=0; i<w.size(); i++){
			for(int j=0; j<w[i].size(); j++){
				w[i][j]=pal[w[i][j]];
			}
			pal2[w[i]].push_back(w2[i]);
		}
		cout<<"year "<<cont<<endl;
		for(it = pal2.begin(); it != pal2.end(); ++it){
			for(int p=0; p<((*it).second).size(); p++)
				cout<<((*it).second)[p]<<endl;
		}
		cont++;
	}
	return 0;
}