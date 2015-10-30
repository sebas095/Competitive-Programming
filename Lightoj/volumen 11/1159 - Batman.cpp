#include <bits/stdc++.h>

using namespace std;
#define FORMAT(x,ans) cout<<"Case "<<(int)x<<": "<<ans<<endl

//Retorna la longitud de la maxima subsecuencia entre doa cadenas
int dp[52][52][52];
string s1,s2,s3;

int LCS_size(int i, int j, int k){
	if(i < 0 || j < 0 || k < 0) return 0;

	if(dp[i][j][k] != -1) return dp[i][j][k];

	if(s1[i] == s2[j] && s2[j] == s3[k])
		return dp[i][j][k] = LCS_size(i-1,j-1,k-1) + 1;
	
	return dp[i][j][k] = max(max(LCS_size(i-1,j,k),LCS_size(i,j-1,k)),LCS_size(i,j,k-1));

}

int main(){
	int t;
	cin>>t;
	for(int k=1; k<=t; k++){
		memset(dp, -1, sizeof(dp));
		int sol = 0;
		cin>>s1>>s2>>s3;
		sol = LCS_size(s1.size()-1, s2.size()-1, s3.size()-1);
		FORMAT(k,sol);

	}
	return 0;
}
