#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;


int countOnes(long long n){
	long long aux = n, ans = 0;
	while(aux > 0){
		ans++;
		aux = aux & (aux-1);
	}
	return ans;
}

int main(){
	fast;
	int t,n,index;
	long long num;
	cin>>t;
	while(t--){
		vector<vector<long long> >ans(64);
		index = 0;
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>num;
			ans[countOnes(num)].push_back(num);
			index = max(index,countOnes(num));
		}

		for(int i=0; i <= index; i++){
			for(int j=0; j<ans[i].size(); j++){
				cout<<ans[i][j];
				if(j < ans[i].size()-1 || i < index)cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
