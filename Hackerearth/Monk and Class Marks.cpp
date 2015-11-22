#include <bits/stdc++.h>
#define endl '\n'
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

bool cmp(const pair<string,int> &a, const pair<string,int> &b){
	if(a.second > b.second)
		return true;
	if(a.second == b.second){
		return (a.first <= b.first);
	}

	return false;
}

int main(){
	fast;
	int n;
	cin>>n;
	vector< pair<string,int> > students(n);
	for(int i=0; i<n; i++){
		cin>>students[i].first>>students[i].second;
	}

	sort(students.begin(), students.end(), cmp);

	for(int i=0; i<n; i++){
		cout<<students[i].first<<" "<<students[i].second<<endl;
	}

	return 0;
}