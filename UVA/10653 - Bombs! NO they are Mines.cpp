#include <bits/stdc++.h>

using namespace std;
bool table[1005][1005];
int x[4] = {1,-1,0,0};
int y[4] = {0,0,-1,1};
int n,m;

struct State{
	int x;
	int y;
	int c;
	State(){}
	State(int x1, int y1, int c1):x(x1),y(y1),c(c1){}
};

int BFS(int si, int sj, int ti, int tj){
	State inicial(si,sj,0);
	queue<State> q;
	q.push(inicial);
	while( !q.empty()){
		State current = q.front();
		q.pop();
		if (current.x == ti && current.y == tj){
			return current.c;
		}
		for(int i=0; i<4; i++){
			int nx = current.x + x[i];
			int ny = current.y + y[i];
			if(nx>=0 && nx < n && ny>=0 && ny<m && !table[nx][ny]){
				table[nx][ny] = true;
				q.push(State(nx,ny,current.c+1));
			}
		}
	}

}

int main(){
	while(cin>>n>>m && m+n){
		int tb,f,c,cb,si,sj,ti,tj;
		memset(table,false,sizeof(table));
		cin>>tb;
		for(int i=0; i<tb; i++){
			cin>>f>>c;
			for(int j=0; j<c; j++){
				cin>>cb;
				table[f][cb] = true;
			}
		}
		cin>>si>>sj;
		cin>>ti>>tj;
		cout<<BFS(si,sj,ti,tj)<<endl;
	}
	return 0;
}