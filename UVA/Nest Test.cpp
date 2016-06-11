#include <bits/stdc++.h>

using namespace std;

int main(){
	int N;
	cin>>N;
	vector<int> index(N);
	for(int i=0; i<N; i++){
		cin>>index[i];
	}
	sort(index.begin(),index.end());
	if(index[0] != 1){
		cout<<"1"<<endl;
		return 0;
	}
	for(int i=1; i<N; i++){
		if(index[i]-index[i-1] > 1){
			cout<<index[i-1]+1<<endl;
			return 0;
		}
	}
	cout<<index[N-1]+1<<endl;
	return 0;
}