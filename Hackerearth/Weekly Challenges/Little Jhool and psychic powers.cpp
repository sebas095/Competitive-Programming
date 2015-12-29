#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define npos string::npos

using namespace std;

int main(){
	fast;
	string s, zeros = "000000", ones = "111111";
	cin >> s;

	if(s.find(zeros) != npos or s.find(ones) != npos) 
		cout << "Sorry, sorry!" << endl;
	else
		cout << "Good luck!" << endl;

	return 0;
}