#include <bits/stdc++.h>

using namespace std;

int limit(int n){
	if(n < 10)return 1;
	if(n == 10)return 10;
	if(n > 10 && n < 100)return 11;
	if(n == 100)return 100;
	if(n > 100 && n < 110)return 101;
	if(n == 110)return 110;
	if(n > 110 && n < 1000)return 111;
	if(n == 1000)return 1000;
	if(n > 1000 && n < 1010)return 1001;
	if(n == 1010)return 1010;
	if(n > 1010 && n < 1100)return 1011;
	if(n == 1100)return 1100;
	if(n > 1100 && n < 1110)return 1101;
	if(n == 1110)return 1110;
	if(n > 1110 && n < 10000)return 1111;
	if(n == 10000)return 10000;
	if(n > 10000 && n < 10010)return 10001;
	if(n == 10010)return 10010;
	if(n > 10010 && 10100)return 10011;
	if(n == 10100)return 10100;
	if(n > 10100 && n < 10110)return 10101;
	if(n == 10110)return 10110;
	if(n > 10110 && n < 11000)return 10111;
	if(n == 11000)return 11000;
	if(n > 11000 && n < 11010)return 11001;
	if(n == 11010)return 11010;
	if(n > 11010 && n < 11100)return 11011;
	if(n == 11100)return 11100;
	if(n > 11100 && 11110)return 11101;
	if(n == 11110)return 11110;
	if(n > 11110 && n < 100000)return 11111;
	if(n == 100000)return 100000;
	if(n > 100000 && n < 100010)return 100001;
	if(n == 100010)return 100010;
	if(n > 100010 && n < 100100)return 100011;
	if(n == 100100)return 100100;
	if(n > 100100 && n < 100110)return 100101;
	if(n == 100110)return 100110;
	if(n > 100110 && n < 101000)return 100111;
	if(n == 101000)return 101000;
	if(n > 101000 && n < 101010)return 101001;
	if(n == 101010)return 101010;
	if(n > 101010 && n < 101100)return 101011;
	if(n == 101100)return 101100;
	if(n > 101100 && n < 101110)return 101101;
	if(n == 101110)return 101110;
	if(n> 101110 && n < 110000)return 101111;
	if(n == 110000)return 110000;
	if(n > 110000 && n < 110010)return 110001;
	if(n == 110010)return 110010;
	if(n > 110010 && n < 110100)return 110011;
	if(n == 110100)return 110100;
	if(n > 110100 && n > 110110)return 110101;
	if(n == 110110)return 110110;
	if(n > 110110 && n > 111000)return 110111;
	if(n == 111000)return 111000;
	if(n > 111000 & n < 111010)return 111001;
	if(n == 111010)return 111010;
	if(n > 111010 && n < 111100)return 111011;
	if(n == 111100)return 111100;
	if(n > 111100 && n < 111110)return 111101;
	if(n == 111110)return 111110;
	if(n > 111110 && n < 1000000)return 111111;
	if(n == 1000000)return 1000000;
}

int main(){
	int n,cant=0,aux=0;
	int total = 0,size=0;
	cin>>n;
	vector <pair <int, int> > solution;
	vector <int> ans;
	cant = n/limit(n);
	if(cant != 0)solution.push_back(make_pair(cant, limit(n)));
	aux = n%limit(n);
	while(aux != 0){
		cant = aux/limit(aux);
		if(cant != 0)solution.push_back(make_pair(cant, limit(aux)));
		aux = aux%limit(aux);
	}

	for(int i=0; i<solution.size(); i++){
		total += solution[i].first;
	}
	cout<<total<<endl;
	for(int i=solution.size()-1; i>=0; i--){
		size = solution[i].first;
		while(size--){
			ans.push_back(solution[i].second);
		}
	}
	for(int i=0; i<ans.size(); i++){
		cout<<ans[i];
		if(i < ans.size()-1)cout<<" ";
	}
	cout<<endl;
	return 0;
}