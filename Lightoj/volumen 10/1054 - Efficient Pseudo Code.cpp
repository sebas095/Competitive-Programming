#include <bits/stdc++.h>
using namespace std;
//HACER
//http://coj.uci.cu/24h/problem.xhtml?pid=3377

const long long MX = 65536 + 10;
const long long MOD = 1000000007;
vector<int> primes;
long long n,m;

//criba
void generated(){
    vector<bool> used(MX,false);
    primes.push_back(2);

    for(int i = 3; i < MX; i += 2){
        if(!used[i]) primes.push_back(i);
        for(int j = i; j < MX; j += i) used[j] = 1;
    } 
}

bool isp(int x){
    for(int i = 0; i < primes.size() && primes[i] <=  sqrt(x) && x; i++){
        if(x % primes[i] == 0) return 0;
    }
    return 1;
}

long long mod_pow(long long a, long long e, long long mod) {
    long long ans = 1;
    long long base = a;
    while (e > 0) {
        if (e & 1)
            ans = (ans * base) % mod;
        base = (base * base) % mod;
        e >>= 1;
    }
    return ans;
}

long long modInverse(long long a, long long m){
    return mod_pow(a,m-2,m);
}

vector<pair <int,int> > factores(long long n){
    vector<pair <int,int> > facts;
    for (long long i = 0, p = primes[i]; p * p <= n; p = primes[++i]){
        int tot = 0;
        while(n%p == 0){
            tot++;
            n /= p;
        }
        if(tot)facts.push_back(make_pair(p,tot));
    }
    if(n > 1)facts.push_back(make_pair(n,1));
    return facts;
}

long long calculated(){
    vector<pair <int,int> > facts = factores(n);
    long long ans = 1;
    for(int i=0; i<facts.size(); i++){
        long long p = facts[i].first;
        long long exp = facts[i].second;

        ans = (ans*(mod_pow(p,exp*m + 1LL,MOD)-1LL+MOD))%MOD; //Total de divisores de forma modular
        ans = (ans*modInverse(p-1LL,MOD))%MOD; //Division modular mediante el producto del modulo inverso
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    generated();
    int t;
    cin>>t;
    for(int k=1; k<=t; k++){
        long long ans;
        cin>>n>>m;  
        ans = calculated();
        cout<<"Case "<<k<<": "<<ans<<endl;
    }
    return 0;
}