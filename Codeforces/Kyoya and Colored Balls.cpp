#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define X     1000000007
long long DP[1015][1015];


int main(){
    for(long long i=1; i<=1009; i++){
        DP[1][i]=1;
        DP[i][1]=i;
    }

    for(long long i=2; i<=1009; i++){
        for(long long j=2; j<=1009; j++)
            DP[i][j]=(DP[i-1][j]+DP[i][j-1])%X;
    }

    int k,c,p=1;
    long long answer=1;
    cin>>k;
    for(long long i=1; i<=k; i++){
        cin>>c;
        if(c-1>0) answer=(answer*DP[p][c-1])%X;
        p+=c;
    }
    cout<<answer<<endl;
    return 0;
}