#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		vector<int> v(n);
		for(int i = 0 ; i < n; i++) cin >> v[i];

		for(int i = 1; i < 1 << n; i++){
			cout << "set " << i << ":";
			for(int j = 0; j < n; j++){
				if((i & (1 << j)) != 0) cout << " " << v[j];
			}
			cout << endl;
		}
	}
}
