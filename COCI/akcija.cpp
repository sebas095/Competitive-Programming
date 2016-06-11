#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, cont = 0;
	cin>>n;
	vector<int> books(n);
	vector<bool> used(n, false);
	for(int i=0; i<n; i++)cin>>books[i];
	sort(books.begin(), books.end());
	for(int i=0; i<n; i++){
		if(!used[i] && !(used[n-1-i] || used[n-2-i])){
			used[i] = true;
			used[n-1-i] = true;
			used[n-2-i] = true;
			//cout<<"i: "<<books[i]<<" 1: "<<books[n-1-i]<<" 2: "<<books[n-2-i]<<endl;
			cont += books[n-1-i];
			cont += books[n-2-i];
		}

	}
	if(n%3 != 0){
		for(int i=0; i<n; i++){
			if(!used[i]){
				//cout<<books[i]<<endl;
				cont += books[i];
			}
		}
	}
	cout<<cont<<endl;
	return 0;
}