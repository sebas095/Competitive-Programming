#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

long long books(long long n){
	if(n <= 9) return n;
	if(n > 9 && n <= 99) return n + (n-9);
	if(n > 99 && n <= 999) return n + (n-9) + (n-99);
	if(n > 999 && n <= 9999) return n + (n-9) + (n-99) + (n-999);
	if(n > 9999 && n <= 99999) return n + (n-9) + (n-99) + (n-999) + (n-9999);
	if(n > 99999 && n <= 999999) return n + (n-9) + (n-99) + (n-999) + (n-9999) + (n-99999);
	if(n > 999999 && n <= 9999999) return n + (n-9) + (n-99) + (n-999) + (n-9999) + (n-99999) + (n-999999);
	if(n > 9999999 && n <= 99999999) return n + (n-9) + (n-99) + (n-999) + (n-9999) + (n-99999) + (n-999999) + (n-9999999);
	if(n > 99999999 && n <= 999999999) return n + (n-9) + (n-99) + (n-999) + (n-9999) + (n-99999) + (n-999999) + (n-9999999)+ (n-99999999);
	if(n > 999999999) return n + (n-9) + (n-99) + (n-999) + (n-9999) + (n-99999) + (n-999999) + (n-9999999)+ (n-99999999) + 1;
}

int main(){
	long long n;
	cin>>n;
	cout<<books(n)<<endl;
	return 0;
}