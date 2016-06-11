#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main(){
	long long c, n;
	long long people = 0;
	cin>>c>>n;
	long long state[n][3];
	for(int i=0; i<n; i++){
		for(int j=0; j<3; j++){
			cin>>state[i][j];
		}
	}


	if(state[0][0] != 0 || state[n-1][1] != 0 || state[n-1][2] != 0){
		cout<<"impossible"<<endl;
		return 0;
	} 
	else {
		for(int i = 0; i < n; i++){
			people -= state[i][0];
			people += state[i][1];

			if((c-people) > 0 && state[i][2] != 0){
				cout<<"impossible"<<endl;
				return 0;
			}

			if(people > c || people < 0){
				cout<<"impossible"<<endl;
				return 0;
			} 
		}

		(people == 0) ? cout<<"possible"<<endl:cout<<"impossible"<<endl;
	}

	return 0;
}