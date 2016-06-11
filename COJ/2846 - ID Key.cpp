#include <bits/stdc++.h>

using namespace std;

int toInt(string x){
	stringstream s;
	s<<x;
	int r;
	s>>r;
	return r;
}

string toStr(int &x){
	stringstream s;
	s<<x;
	return s.str();
}

int toEnt(char d){
	return d-48;
}

int main(){
	int cases;
	cin>>cases;
	while(cases--){
		int tot=0,tot2=0;
		string s,ans;
		cin>>s;
		string s2=s.substr(10,3);
		for(int i=0; i<13; i++){
			tot+=toEnt(s[i]);
		}

		tot2=tot+toInt(s2)*10;
		ans=toStr(tot2);
		if(ans.size()==4)cout<<ans<<endl;
		else{
			if(ans.size()==3)cout<<"1"<<ans<<endl;
			else{
				if(ans.size()==2)cout<<"10"<<ans<<endl;
				else{
					if(ans.size()==1)cout<<"1000"<<ans<<endl;
					else cout<<ans.substr(ans.size()-4)<<endl;
				}
		
			}
		
		}
		
	}
	return 0;
}