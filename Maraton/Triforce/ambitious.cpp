#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int sum(int i, int j,int t,vector <vector <int> > &amb, vector <vector <int> > &DP){
	if(DP[i][j] != -1) return DP[i][j];
	if(i == t-1 && j == t-1) return amb[t-1][t-1];
	int value1 = (i < t-1) ? sum(i+1,j,t,amb,DP):0;
	int value2 = (j < t-1) ? sum(i,j+1,t,amb,DP):0;
	DP[i][j] = max(value1,value2) + amb[i][j];
	return DP[i][j];
}

void solve(int &t,vector <vector <int> > &amb, vector <vector <int> > &DP){
	DP.clear();
	amb.clear();
	int aux;
	for(int i=0; i<t; i++){
		vector <int> temp,temp2;
		for(int j=0; j<t; j++){
			cin>>aux;
			temp.push_back(aux);
			temp2.push_back(-1);
		}
		amb[i] = temp;
		DP[i] = temp2;
	}
	cout<<sum(0,0,t,amb,DP)<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	while(cin>>t && t!=0){
		vector <vector <int> > amb(t);
		vector <vector <int> > DP(t);
		solve(t,amb,DP);
	}
	return 0;
}