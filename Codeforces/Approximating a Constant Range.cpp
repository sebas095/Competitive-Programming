#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

long long constant_range(vector<long long> &range){
	long long l = 0, r = 0, max = 0, cmp = 0, tmp = 0, prev = 0;
	for(int i = 0; i < range.size(); i++){
		long long a = range[i];
		if(a != l && a != r){
			if(cmp > max)
				max = cmp;

			cmp = tmp;
			tmp = 1;
			l = prev;
			r = a;
			prev = a;
		}
		else{
			if(a == prev)
				tmp++;
			else{
				tmp = 1;
				prev = a;
			}
		}
		cmp++;
	}
	
	if(max < cmp)
		max = cmp;

	return max;
}

int main(){
	long long n, ans = 0;
	cin >> n;
	vector<long long> range(n);
	for(int i=0; i<n; i++) cin>>range[i];

	ans = constant_range(range);
	cout << ans << endl;
	
	return 0;
}	