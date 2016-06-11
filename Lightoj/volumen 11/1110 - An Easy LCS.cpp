#include <bits/stdc++.h>
#define MAX 101

using namespace std;

int memo[MAX][MAX];
string ans[MAX][MAX];

void LCS(string x, string y){
    for(int i=0; i<=x.size(); i++){
        memo[i][0] = 0;
        ans[i][0] = "";
    }

    for(int j=0; j<=y.size(); j++){
        memo[0][j] = 0;
        ans[0][j] = "";
    }

    for(int i=1; i<=x.size(); i++){
        for(int j=1; j<=y.size(); j++){
            
            if(x[i-1] == y[j-1]){
                memo[i][j] = memo[i-1][j-1] + 1;
                ans[i][j] = ans[i-1][j-1] + x[i-1];
            }
            
            else if(memo[i-1][j]  > memo[i][j-1]){
                memo[i][j] = memo[i-1][j];
                ans[i][j] = ans[i-1][j];
            }
            
            else if(memo[i][j-1] > memo[i-1][j]){
                memo[i][j] = memo[i][j-1];
                ans[i][j] = ans[i][j-1];
            }
            
            else {
                memo[i][j] = memo[i-1][j];
                ans[i][j] = min(ans[i-1][j],ans[i][j-1]);
            }
        }
    }
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	for (int k = 1; k <= t; k++){
		string a,b;
		cin>>a>>b;
		LCS(a,b);
		cout<<"Case "<<k<<": ";
		(memo[a.size()][b.size()] == 0)? cout<<":(\n" : cout<<ans[a.size()][b.size()]<<endl;
	}
	return 0;
}