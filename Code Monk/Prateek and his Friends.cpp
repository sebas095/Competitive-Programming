#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

long long costs[1000009];
int res,n;

bool solve(){
    long long sum = costs[0];
    int index = 0;
    for(int i=1; i<n; i++){
        while(sum > res){
            sum -= costs[index];
            index++;
        }
        if(sum == res) return true;
        sum += costs[i];
    }
    while(sum > res){
        sum -= costs[index];
        index++;
    }
    
    return (sum == res);
}

int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        cin>>n>>res;
        for(int i=0; i<n; i++) cin>>costs[i];
        (solve())? cout<<"YES\n" : cout<<"NO\n";
    }
    return 0;
}