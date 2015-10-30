#include <bits/stdc++.h>

using namespace std;

int main(){
	int cases;
	cin>>cases;
	while(cases--){
		int N,ans=0;
		cin>>N;
		int num[N];
		for(int i=0; i<N;i++){
			cin>>num[i];
		}
		sort(num,num+N,greater<int>());
		for(int i=2;i<N; i+=3){
			ans += num[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}