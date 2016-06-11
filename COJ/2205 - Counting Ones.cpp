//2205 - Counting Ones
//http://coj.uci.cu/24h/problem.xhtml?abb=2205

#include <bits/stdc++.h>

using namespace std;

int binary(int a){
	int total=0;

	while((a/2)>=1){
		total+=a%2;
		a=a/2;
	}
	total+=1;

	return total;
}

int main(){
	int x, y, t;
	vector<int> vec(1001);

	vec[0]=0;
	for(int i=1; i<1001; i++){
		vec[i]=vec[i-1]+binary(i);
	}

	cin>>t;
	for(int i=0; i<t; i++){
		cin>>x>>y;
		cout<<vec[y]-vec[x-1]<<endl;
	}

	return 0;
}