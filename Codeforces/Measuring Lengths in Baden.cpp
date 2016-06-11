#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a=0,b=0,r=0;
    while(true){
    a=(int)n/36;
    r=n%36;

    b=(int)r/3;
    if(r%3==2)
        b+=1;

    if(b>=12)
       n=b*3+a*36;
    else
        break;
   }

    cout<<a<<" "<<b<<endl;;
    return 0;
}