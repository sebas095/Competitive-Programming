#include <bits/stdc++.h>

using namespace std;

vector <int> v(9);
vector <int> total;

int main(){
  bool comp=true;
  int n,m;
  int x,y;
  cin >> n >> m;
  int mat[n+1][n+1];
  memset(mat,0, sizeof(mat));
  for(int i =1; i <= m; i++){
    cin >> x >> y;
    mat[x][y]=i;
  }
   for(int i =2; i < n; i++){
    for(int j=2; j < n; j++){
      if(mat[i][j] != 0){
        if((mat[i-1][j]!=0)&& (mat[i-1][j+1]!=0)&&(mat[i][j+1]!=0)&&(mat[i+1][j+1]!=0)&&
          (mat[i+1][j]!=0)&&(mat[i+1][j-1]!=0)&&(mat[i][j-1]!=0)&&(mat[i-1][j-1]!=0)){
            comp = false;
            v[0] = mat[i-1][j];
            v[1] = mat[i-1][j+1];
            v[2] = mat[i][j+1];
            v[3] = mat[i+1][j+1];
            v[4] = mat[i+1][j];
            v[5] = mat[i+1][j-1];
            v[6] = mat[i][j-1];
            v[7] = mat[i-1][j-1];
            v[8] = mat[i][j];
            sort(v.begin(), v.end());
            total.push_back(v[v.size()-1]);
       
        }
      }
    }
  }
  sort(total.begin(),total.end());
  if(comp == false)
     cout<<total[0]<<endl;
  else
    cout << -1 <<endl;
  //cout<<endl;
  return 0;
  
}
