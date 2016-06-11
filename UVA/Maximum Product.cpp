#include <bits/stdc++.h>

using namespace std;

int main(){
	int cases;
	int cont = 0;
	while(cin>>cases){
		long long numbers[cases];
		long long temp = 1,product=0;
		for(int i=0; i<cases; i++){
			cin>>numbers[i];
		}
		for(int i=0; i<cases; i++){
			temp = 1;
			for(int j=i; j<cases; j++){
				temp *= numbers[j];
				product = max(product,temp);
			}
		}
		cout<<"Case #"<<++cont<<": The maximum product is "<<product<<"."<<endl<<endl;
	}
	return 0;
}