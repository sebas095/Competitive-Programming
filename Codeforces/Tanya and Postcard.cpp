#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> alp1(58,0);
	vector<int> alp2(58,0);
	vector<int> alp3(58,0);
	vector<int> alp4(58,0);
	string s1,s2;
	int cont_yay=0;
	int cont_whoops=0;
	cin>>s1>>s2;
	for(int i=0; i<s1.size(); i++){
		alp1[s1[i]-65]++;
	}
	for(int i=0; i<s2.size(); i++){
		alp2[s2[i]-65]++;
	}
	for(int i=0; i<58; i++){
		alp3[i] = alp1[i]-alp2[i];
	}
	for(int i=0; i<58; i++){
		if(alp3[i] <= 0){
			cont_yay+=alp1[i];
		}
		if(alp3[i] > 0){
			cont_yay+=alp1[i]-alp3[i];
		}
	}
	for(int i=0; i<58; i++){
		if(alp3[i] < 0){
			alp3[i] = alp3[i]*-1;
		}
		else alp3[i]=0;
	}
	for(int i=0; i<25; i++){
		alp4[i]=alp3[i+32];
	}
	for(int i=32; i<58;i++){
		alp4[i]=alp3[i-32];
	}
	for(int i=0;i<58;i++){
		if(alp4[i]-alp1[i] <= 0){
			cont_whoops += alp4[i];
		}
		//if(alp4[i]-alp1[i] > 0){
			//cont_whoops += alp4[i]-alp1[i];
		//}
		//cout<<(char)(i+65)<<": "<<alp4[i]<<endl;
	}
	if(cont_yay == s1.size())cont_whoops=0;
	cout<<cont_yay<<" "<<cont_whoops<<endl;
	return 0;
//dejar solos los negativos de alp3 y mirar si hay esta opuesto en alp1 y hacerlo como el yay
}