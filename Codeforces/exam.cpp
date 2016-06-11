#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==3)cout<<2<<endl<<"1 3\n";
    else if(n<=2)cout<<1<<endl<<"1\n";
    else{
        cout<<n<<endl;
        for(int i=2;i <= n; i+=2)
            cout<<i<<" ";

        for(int i=1;i <= n; i+=2)
            cout<<i<<" ";

        cout<<endl;
    }

	return 0;
}
