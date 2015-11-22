#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

bool check(int monk, int tot_monks, vector<int> &temples){
	int prev = temples[0] + monk;
	tot_monks--;

	for(int i=1; i<temples.size(); i++){
		if(prev + monk >= temples[i])continue;
		if(tot_monks == 0)
			return false;
		prev = temples[i] + monk;
		tot_monks--;
	}
	return true;
}

int binarySearch(int tot_monks, vector<int> &temples){
	int low = 0, hi = 100000000, mid = 0;
	while(hi >= low){
		mid = (low + hi)/2;
		bool nmonk1 = check(mid-1,tot_monks,temples);
		bool nmonk2 = check(mid,tot_monks,temples);

		if(nmonk2 && !nmonk1)break;

		if(!nmonk2)
			low = mid + 1;
		else
			hi = mid - 1;
	}

	return mid;
}

int main(){
	fast;
	int n,k;
	cin>>n>>k;
	vector<int> temples(n);
	
	for(int i=0; i<n; i++)cin>>temples[i];
	sort(temples.begin(), temples.end());
	
	cout<<binarySearch(k,temples)<<endl;

	return 0;
}