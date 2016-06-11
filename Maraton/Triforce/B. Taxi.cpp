#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,ans=0,person;
	cin>>n;
	vector <int> group(5,0);
    while(n--){
        cin>>person;
        group[person]+=1;
    }
 	ans = group[4]+group[3]+(group[2]+1)/2 + (group[1]-min(group[3],group[1]) - 2* (group[2]%2)+3)/4;
 	cout<<ans<<endl;

	return 0;
}