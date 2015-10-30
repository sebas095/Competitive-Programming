#include <bits/stdc++.h>

using namespace std;


int search_left(vector<string> &b){
	int index = 0;
	for(int i=1; i<b.size(); i++){
		if(b[i][2] == '/'){
			index = i;
			break;
		}
	}
	return index;
}

int search_right(vector<string> &b){
	int index = 0;
	for(int i=1; i<b.size(); i++){
		if(b[i][12] == '/'){
			index = i;
			break;
		}
	}
	return index;
}


int main(){
	int sumas[] = {2250, 2250, 2500, 2250, 2500, 2500, 2750, 2250, 2500, 2500, 2750, 2500, 2750, 2750, 3000, 2250, 2500, 2500, 2750, 2500, 2750, 2750, 3000, 2500, 2750, 2750};
	int cases;
	cin>>cases;
	vector<string> balanza(7);
	string aux;
	for(int j = 1; j <= cases; j++){
		for(int i=0; i< 7; i++){
			cin>>balanza[i];
		}
		cin>>aux;
		char letras[12];
		vector <char> letras2(12);
		int diag1 =search_left(balanza);
		int diag2 = search_right(balanza);
		int acum1 = 0,acum2=0;



		if(balanza[diag1][3] != '.'){
			acum1 += sumas[balanza[diag1][3]-65];
		}
		if(balanza[diag1][4] != '.'){
			acum1 += sumas[balanza[diag1][4]-65];
		}
		if(balanza[diag1+1][2] != '.'){
			acum1 += sumas[balanza[diag1+1][2]-65];
		}
		if(balanza[diag1+1][3] != '.'){
			acum1 += sumas[balanza[diag1+1][3]-65];
		}
		if(balanza[diag1+1][4] != '.'){
			acum1 += sumas[balanza[diag1+1][4]-65];
		}
		if(balanza[diag1+1][5] != '.'){
			acum1 += sumas[balanza[diag1+1][5]-65];
		}
		if(balanza[diag1+2][1] != '.'){
			acum1 += sumas[balanza[diag1+2][1]-65];
		}
		if(balanza[diag1+2][2] != '.'){
			acum1 += sumas[balanza[diag1+2][2]-65];
		}
		if(balanza[diag1+2][3] != '.'){
			acum1 += sumas[balanza[diag1+2][3]-65];
		}
		if(balanza[diag1+2][4] != '.'){
			acum1 += sumas[balanza[diag1+2][4]-65];
		}
		if(balanza[diag1+2][5] != '.'){
			acum1 += sumas[balanza[diag1+2][5]-65];
		}
		if(balanza[diag1+2][6] != '.'){
			acum1 += sumas[balanza[diag1+2][6]-65];
		}


		if(balanza[diag2][13] != '.'){
			acum2 += sumas[balanza[diag2][13]-65];
		}
		if(balanza[diag2][14] != '.'){
			acum2 += sumas[balanza[diag2][14]-65];
		}
		if(balanza[diag2+1][12] != '.'){
			acum2 += sumas[balanza[diag2+1][12]-65];
		}
		if(balanza[diag2+1][13] != '.'){
			acum2 += sumas[balanza[diag2+1][13]-65];
		}
		if(balanza[diag2+1][14] != '.'){
			acum2 += sumas[balanza[diag2+1][14]-65];
		}
		if(balanza[diag2+1][15] != '.'){
			acum2 += sumas[balanza[diag2+1][15]-65];
		}
		if(balanza[diag2+2][11] != '.'){
			acum2 += sumas[balanza[diag2+2][11]-65];
		}
		if(balanza[diag2+2][12] != '.'){
			acum2 += sumas[balanza[diag2+2][12]-65];
		}
		if(balanza[diag2+2][13] != '.'){
			acum2 += sumas[balanza[diag2+2][13]-65];
		}
		if(balanza[diag2+2][14] != '.'){
			acum2 += sumas[balanza[diag2+2][14]-65];
		}
		if(balanza[diag2+2][15] != '.'){
			acum2 += sumas[balanza[diag2+2][15]-65];
		}
		if(balanza[diag2+2][16] != '.'){
			acum2 += sumas[balanza[diag2+2][16]-65];
		}


		cout<<"Case "<<j<<":"<<endl;
		if(acum1 == acum2 && diag1 == diag2 || acum1 > acum2 && diag1 > diag2 || acum1 < acum2 && diag1 < diag2){
			cout<<"The figure is correct."<<endl;
		}
		else{
			if(acum1 > acum2){
				cout<<"........||.../\\..."<<endl;
				cout<<"........||../"<<balanza[diag2][13]<< balanza[diag2][14]<<"\\.."<<endl;
				cout<<".../\\...||./"<<balanza[diag2+1][12] << balanza[diag2+1][13]<< balanza[diag2+1][14]<< balanza[diag2+1][15]<<"\\."<<endl;
				cout<<"../"<<balanza[diag1][3]<<balanza[diag1][4]<<"\\..||/"<< balanza[diag2+2][11]<< balanza[diag2+2][12]<< balanza[diag2+2][13]<< balanza[diag2+2][14]<< balanza[diag2+2][15]<< balanza[diag2+2][16]<<"\\"<<endl;
				cout<<"./"<<balanza[diag1+1][2] << balanza[diag1+1][3]<< balanza[diag1+1][4]<< balanza[diag1+1][5]<<"\\.||\\______/"<<endl;
				cout<<"/"<< balanza[diag1+2][1]<< balanza[diag1+2][2]<< balanza[diag1+2][3]<< balanza[diag1+2][4]<< balanza[diag1+2][5]<< balanza[diag1+2][6]<<"\\||........"<<endl;
				cout<<"\\______/||........"<<endl;

			}
			else{
				if(acum1 < acum2){
					cout<<".../\\...||........"<<endl;
					cout<<"../"<<balanza[diag1][3]<<balanza[diag1][4]<<"""\\..||........"<<endl;
					cout<<"./"<<balanza[diag1+1][2]<<balanza[diag1+1][3]<<balanza[diag1+1][4]<<balanza[diag1+1][5]<<"""\\.||.../\\..."<<endl;
					cout<<"/"<<balanza[diag1+2][1]<<balanza[diag1+2][2]<<balanza[diag1+2][3]<<balanza[diag1+2][4]<<balanza[diag1+2][5]<<balanza[diag1+2][6]<<"""\\||../"<<balanza[diag2][13]<<balanza[diag2][14]<<"""\\.."<<endl;
					cout<<"\\______/||./"<<balanza[diag2+1][12]<<balanza[diag2+1][13]<<balanza[diag2+1][14]<<balanza[diag2+1][15]<<"""\\."<<endl;
					cout<<"........||/"<<balanza[diag2+2][11]<<balanza[diag2+2][12]<<balanza[diag2+2][13]<<balanza[diag2+2][14]<<balanza[diag2+2][15]<<balanza[diag2+2][16]<<"\\"<<endl;
					cout<<"........||\\______/"<<endl;
				}
				else{
					cout<<"........||........"<<endl;
					cout<<".../\\...||.../\\..."<<endl;
					cout<<"../"<< balanza[diag1][3]<< balanza[diag1][4]<<"\\..||../"<< balanza[diag2][13]<< balanza[diag2][14]<<"\\.."<<endl;
					cout<<"./"<< balanza[diag1+1][2]<< balanza[diag1+1][3]<< balanza[diag1+1][4]<< balanza[diag1+1][5]<<"\\.||./"<< balanza[diag2+1][12]<< balanza[diag2+1][13] << balanza[diag2+1][14] << balanza[diag2+1][15] <<"\\."<<endl;
					cout<<"/"<<balanza[diag1+2][1] <<balanza[diag1+2][2] <<balanza[diag1+2][3] <<balanza[diag1+2][4] <<balanza[diag1+2][5] <<balanza[diag1+2][6] <<"\\||/"<<balanza[diag2+2][11] <<balanza[diag2+2][12] <<balanza[diag2+2][13] <<balanza[diag2+2][14] <<balanza[diag2+2][15] <<balanza[diag2+2][16] <<"\\"<<endl;
					cout<<"\\______/||\\______/"<<endl;
					cout<<"........||........"<<endl;
				}
			}
		}

	}

	return 0;
}