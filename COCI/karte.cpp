#include <bits/stdc++.h>

using namespace std;

int toInt(string s){
	stringstream ss;
	ss << s;
	int r;
	ss >> r;
	return r;
}

string toStr(int x){
	stringstream ss;
	ss << x;
	return ss.str();
}

int main(){
	string s;
	set<int> p,k,h,t;
	bool flag = false;
	int tmp = 0, cp = 0,ck = 0, ch = 0, ct = 0;
	cin>>s;
	for(int i=0; i<s.size(); i+=3){
		string aux = s.substr(i+1,2);
		tmp = toInt(aux);
		if(s[i] == 'P'){
			if(!p.count(tmp)){
				cp++;
				p.insert(tmp);
			}
			else{
				flag = true;
				break;
			}
		}
		else if(s[i] == 'K'){
			if(!k.count(tmp)){
				ck++;
				k.insert(tmp);
			}
			else{
				flag = true;
				break;
			}
		}
		else if(s[i] == 'H'){
			if(!h.count(tmp)){
				ch++;
				h.insert(tmp);
			}
			else{
				flag = true;
				break;
			}
		}
		else if(s[i] == 'T'){
			if(!t.count(tmp)){
				ct++;
				t.insert(tmp);
			}
			else{
				flag = true;
				break;
			}
		}
	}
	(flag)? cout<<"GRESKA\n" : cout<<13-cp<<" "<<13-ck<<" "<<13-ch<<" "<<13-ct<<endl; 
	return 0;
}