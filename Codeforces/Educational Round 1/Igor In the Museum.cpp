#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

vector <vector<char> >G (1002, vector<char>(1002,'*'));
vector<vector<int> >visited(1002,vector<int>(1002,0));
vector<int> ans(1000100,0);

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int pictures = 0, n, m;

// ------------------------------------------------------------------------------------------------------- //
// Solucion Forma 1:
void dfs(int x, int y, int pos){
	if(!visited[x][y]){
		// Marcamos todas las celdas correspondientes a las pinturas vistas enel viaje pos
		visited[x][y] = pos; 

		for(int i=0; i<4; i++){
			int nx = dx[i] + x;
			int ny = dy[i] + y;

			if(nx >= 0 && nx < n && ny >= 0 && ny < m){
				if(G[nx][ny] == '*') 
					pictures++;
				else
					dfs(nx,ny,pos);
			}
		}
	}
}

void view_pictures(){
	int posi = 1; // Numero del viaje para ver pinturas
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(G[i][j] == '.'){
				pictures = 0;
				dfs(i,j,posi);
				ans[posi] = pictures; // pinturas que vio en el viaje pos
				posi++;
			}
		}
	}
}

// ------------------------------------------------------------------------------------------------------- //
// Solucion Forma 2:
int pos = 0; // Numero del viaje para ver pinturas

int bfs(int x, int y){
	++pos;
	visited[x][y] = pos;
	queue< pair<int,int> >q;
	q.push(make_pair(x,y));
	while(!q.empty()){
		int curx = q.front().first;
		int cury = q.front().second;
		q.pop();

		for(int i=0; i<4; i++){
			int nx = curx + dx[i];
			int ny = cury + dy[i];

			if(nx >= 0 && nx < n && ny >= 0 && ny < m){
				if(G[nx][ny] == '*'){
					pictures++;
					continue;
				}

				if(!visited[nx][ny]){	
					visited[nx][ny] = pos;
					q.push(make_pair(nx,ny));
				}

			}
		}
	}

	return ans[pos] = pictures; // pinturas que vio en el viaje pos
	
}

int view_pictures2(int a, int b){
	if(visited[a][b])
		return ans[visited[a][b]];
	
	pictures = 0;
	return bfs(a,b);

}
// ------------------------------------------------------------------------------------------------------- //

int main(){
	fast;
	int k,a,b;
	cin>>n>>m>>k;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>G[i][j];
		}
	}
	view_pictures(); // Forma 1
	while(k--){
		cin>>a>>b;
		a--;b--;
		cout<<ans[visited[a][b]]<<endl; // Forma 1
		//cout<<view_pictures2(a,b)<<endl; //Forma 2
	}

	return 0;
}