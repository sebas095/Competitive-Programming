#include <bits/stdc++.h>
 
using namespace std;
 
int n;
int memo[205][105];
 
int DP(int fil, int col, vector< vector<int> > &diamond){
    if(fil <0 || col==diamond[fil].size() || col<0) return 0;
    if(memo[fil][col] != -1) return memo[fil][col];
    int ans = DP(fil-1, col, diamond);
    if(fil < n){
        ans = max(ans,DP(fil-1, col-1, diamond))+diamond[fil][col];
    }
    else{
        ans = max(ans,DP(fil-1, col+1, diamond))+diamond[fil][col];
    }
 
    return memo[fil][col] = ans;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int cases=1; cases<=t; cases++){
        memset(memo, -1, sizeof(memo));
        int tmp=0,a;
        cin>>n;
        vector< vector<int> > diamond(2*n-1);
        for(int i=0; i<2*n-1; i++){
            vector<int> aux;
            if(i <= (n-1))tmp++;
            else tmp--;
            for(int j=0; j<tmp; j++){
                cin>>a;
                aux.push_back(a);
            }
            diamond[i] = aux;
        }
        cout<<"Case "<<cases<<": "<<DP(2*n-2, 0, diamond)<<endl;
    }
    return 0;
}