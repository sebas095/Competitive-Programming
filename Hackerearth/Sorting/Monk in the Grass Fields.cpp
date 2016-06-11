#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define OO 1e18

using namespace std;

int main(){
	fast;
	long long t,n,k;
	cin>>t;
	while(t--){
		long long ans = OO;
		long long tmp;
		cin>>n>>k;
		vector<int> row(n,0);
		vector<int> col(n,0);
		vector<int> sr(500,0), sc(500,0);
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin>>tmp;
				row[i] += tmp;
				col[j] += tmp;
			}
		}
		priority_queue<int, vector<int>, greater<int> >row2,col2;
		for(int i=0; i<n; i++){
			row2.push(row[i]);
			col2.push(col[i]);
		}
		for(int i=1; i <= k; i++){
			int top = row2.top();
			row2.pop();
			row2.push(top + n);
			sr[i] = sr[i-1] + top;
			
			top = col2.top();
			col2.pop();
			sc[i] = sc[i-1] + top;
			col2.push(top + n);

		}

		for(long long i=0; i <= k; i++){
			ans = min(ans, sr[i] + sc[k-i] + (i*(k-i)));
		} 

		cout<<ans<<endl;
	}
	return 0;
}