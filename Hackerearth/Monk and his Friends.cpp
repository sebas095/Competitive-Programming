#include <bits/stdc++.h>
#define endl '\n'
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main(){
	fast;
	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		long long tmp;
		set<long long> students;
		long long candies;

		for(int i=0; i<n; i++){
			cin>>tmp;
			students.insert(tmp);
		}

		for(int i=0; i<m; i++){
			cin>>candies;
			if(students.count(candies)){
				cout<<"YES"<<endl;
			}
			else{
				students.insert(candies);
				cout<<"NO"<<endl;
			}
		}

	}
	return 0;
}