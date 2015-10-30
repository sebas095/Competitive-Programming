#include <bits/stdc++.h>

using namespace std;

int isVocal(char a){
	if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){
		return 1;
	}
	return 0;
}

int main(){
	int cases;
	string a,b;
	cin>>cases;
	while(cases--){
		cin>>a>>b;
		int ans = (a.size() == b.size());
		if(ans){
			for(int i=0; i<a.size(); i++){
				char a2 = a[i];
				char b2 = b[i];
				if(a2 != b2 && (!isVocal(a2) || !isVocal(b2))){
					ans = 0;
					break;
				}
			}
		}
		if(ans)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}

	return 0;
}