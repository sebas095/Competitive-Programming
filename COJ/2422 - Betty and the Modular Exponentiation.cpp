#include <bits/stdc++.h>

using namespace std;

long long bigmod(long long b,long long p,long long m){
        long long mask=1;
        long long pow2= b%m;
        long long r=1;
        while(mask > 0){
            if((p & mask)> 0)r=((r%m)*(pow2%m))%m;
            pow2= (pow2%m)*(pow2%m)%m;
            mask <<=1;            
        }
        return r;
    }
    
    int main(){
        int cases;
        long long a,b,mod=1000000000;
        cin>>cases;
        for(int i=1; i<=cases; i++){
            cin>>a>>b;
           cout<<bigmod(a, b, mod)<<endl;
        }
        return 0;
    }