#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> primes;
bool used[100009];

void gen(){
    primes.push_back(2);
    int t = sqrt(1e9);
    memset(used,0,sizeof used);
    for(int i = 3; i <= 100000; i += 2){
        if(!used[i]) primes.push_back(i);
        for(int j = i; j <= 100000; j += i) used[j] = 1;
    }
    
    
}

bool isp(int x){
    
    for(int i = 0; i < primes.size() && primes[i] <=  sqrt(x) && x; i++){
        if(x % primes[i] == 0) return 0;
    }
    
    return 1;
}

void solve(int nt){
    if( isp(nt)){cout << 1 << endl << nt << endl; return;}
        
        for(int i = 0; i < 1000; i++){
            vector<int> ans;
            ans.push_back(primes[i]);
            int n = nt;
            n -= primes[i];
            
            for(int i = 0; i < 1000 && n > 0; i++){
                
                int cur = n - primes[i];
                if(cur > 0 && isp(cur)){
                    ans.push_back(primes[i]);
                    ans.push_back(cur);
                    cout << ans.size() << endl;  
                    for(int i = 0; i < ans.size(); i++) cout << ans[i] <<" "; cout << endl;
                    return;
                }
            }  
        }
        
}

int main(){
    gen();
    int n;
    while( cin >> n){
        solve(n);
        
    }
}