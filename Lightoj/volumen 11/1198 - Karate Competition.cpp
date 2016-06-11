#include <bits/stdc++.h>
using namespace std;

#define FORMAT(x,ans) cout<<"Case "<<(int)x<<": "<<ans<<endl

int main(){
	int t;
	cin>>t;
	for(int k=1; k<=t; k++){
		int n, point = 0;
		cin>>n;
		vector<int> team1(n+3,0), team2(n+3,0);
		int points[n+3][n+3];
		memset(points,0,sizeof points);
		
		for(int i=0; i<n; i++)cin>>team1[i];
		for(int i=0; i<n; i++)cin>>team2[i];

		sort(team1.begin(), team1.end(), greater<int>());
		sort(team2.begin(), team2.end(), greater<int>());

		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				if(team1[i-1] > team2[j-1]) point = 2;
				else if(team1[i-1] == team2[j-1]) point = 1;
				else point = 0;

				points[i][j] = max(max(points[i-1][j],points[i][j-1]),points[i-1][j-1]+point);
			}
		}

		FORMAT(k,points[n][n]);

	}
	return 0;
}