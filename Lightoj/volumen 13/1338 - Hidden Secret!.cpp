#include <string>
#include <sstream>
#include <algorithm>
#include <iostream>
 
using namespace std;
 
void secret(string &cad){
    string s;
    int j=0;
    for(int i=0; i<cad.size(); i++){
        if(cad[i]==' ')j++;
    }
    while(j!=0){
        cad.erase(find(cad.begin(),cad.end(),' '));
        j--;
    }
    for(int j=0; j<cad.size(); j++){
        if(cad[j]>='A' && cad[j]<='Z')cad[j]+=32;
    }
    sort(cad.begin(),cad.end());
}
 
int toInt(string s){
    stringstream cad;
    int r;
    cad <<s;
    cad>>r;
    return r;
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string n,a,b;
    int t;
    getline(cin,n);
    t=toInt(n);
    for(int i=1; i<=t; i++){
        getline(cin,a);
        getline(cin,b);
        secret(a);
        secret(b);
        cout<<"Case "<<i<<": ";
        if(a==b)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}