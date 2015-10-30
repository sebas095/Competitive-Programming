#include <bits/stdc++.h>

using namespace std;


int find(int num, vector <int>&contador){
	int max=0;
	int pos=0;
	for(int i=0; i<=num; i++){
		if(contador[i] > max){
			max=contador[i];
			pos=i;
		}
	}
	return pos;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector <int> contador(1000001);
	for(int i=1;i<1000001;i++){
        for (int j=i;j<1000001;j+=i){
            contador[j]++;
        }
    }
	int cases,num;
	cin>>cases;
	while(cases--){
		cin>>num;
		cout<<find(num,contador)<<endl;
	}
	return 0;
}