#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	fast;
	int n;
	long long totW = 0, ans = 0;
	cin>>n;
	vector< pair<int,int> > friends(n);
	vector< pair<int,int> > totH(n);
	for(int i=0; i<n; i++) {
		cin>>friends[i].first>>friends[i].second;
		totW += friends[i].first;
		totH[i] = make_pair(friends[i].second,i);
	}

	sort(totH.rbegin(), totH.rend());

	for(int i=0; i<n; i++){
		ans = 0;
		ans = totW - friends[i].first;
		if(totH[0].second == i)
			ans *= totH[1].first;
		else
			ans *= totH[0].first;

		(i)? cout<<" "<<ans : cout<<ans;

	}

	cout<<endl;

	return 0;
}