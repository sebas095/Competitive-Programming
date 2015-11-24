#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        vector<int> vec(n);
        for(int i=0; i<n; i++)cin>>vec[i];
        sort(vec.rbegin(), vec.rend());
        for(int i=0; i<n; i++){
            cout<<vec[i];
            if(i<n-1)cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}