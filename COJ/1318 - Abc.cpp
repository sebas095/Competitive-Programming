#include <bits/stdc++.h>

using namespace std;

int main(){
	char s[3];
	vector<int>v(3);
	cin>>v[0]>>v[1]>>v[2];
	cin>>s[0]>>s[1]>>s[2];
	sort(v.begin(), v.end());
	int ind1=0,ind2=0,ind3=0;
	ind1=s[0]-65;
	ind2=s[1]-65;
	ind3=s[2]-65;
	cout<<v[ind1]<<" "<<v[ind2]<<" "<<v[ind3]<<endl;
	return 0;
}