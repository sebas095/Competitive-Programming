#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned long long int n,m,pairs,max,min,pairs2;
    cin>>n>>m;
    pairs = n-(m-1);
    pairs2 = n/m;
    min = (pairs2*(pairs2-1)/2)*m + (n%m)*pairs2;
    max = (pairs-1)*pairs/2;
    cout<<min<<" "<< max <<endl;
    return 0;
}