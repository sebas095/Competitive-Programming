#include <bits/stdc++.h>

using namespace std;

void divisores(int n){
	int a=1;
	int ans=0;
	vector <int> num;
	while(a != n){
		if(n%a == 0){
			num.push_back(a);
		}
		a++;
	}
	for(int i=0; i<num.size(); i++){
		ans += num[i];
	}
	if(ans > n){
		cout<<"Abundant"<<endl;
	}
	else{
		if(ans == n){
			cout<<"Perfect"<<endl;
		}
		else{
			cout<<"Deficient"<<endl;
		}
	}
}

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		divisores(n);
	}
	return 0;
}