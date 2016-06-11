#include <bits/stdc++.h>
#define endl '\n'
#define init "                             "
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

//http://coj.uci.cu/24h/problem.xhtml?pid=3152

using namespace std;

vector<string> build(char c){
	int id = c-'0';
	vector<string> numbers(7);

	switch(id){
		case 0:{
			//CERO
			numbers[0] = "+---+";
          	numbers[1] = "|   |";
          	numbers[2] = "|   |";
          	numbers[3] = "+   +";
          	numbers[4] = "|   |";
          	numbers[5] = "|   |";
          	numbers[6] = "+---+"; 
			break;
		}
		case 1:{
			//UNO
			numbers[0] = "    +";
          	numbers[1] = "    |";
          	numbers[2] = "    |";
          	numbers[3] = "    +";
          	numbers[4] = "    |";
          	numbers[5] = "    |";
          	numbers[6] = "    +"; 
			break;
		}
		case 2:{
			//DOS
			numbers[0] = "+---+";
          	numbers[1] = "    |";
          	numbers[2] = "    |";
          	numbers[3] = "+---+";
          	numbers[4] = "|    ";
          	numbers[5] = "|    ";
          	numbers[6] = "+---+"; 
			break;;
		}
		case 3:{
			//TRES
			numbers[0] = "+---+";
          	numbers[1] = "    |";
          	numbers[2] = "    |";
          	numbers[3] = "+---+";
          	numbers[4] = "    |";
          	numbers[5] = "    |";
          	numbers[6] = "+---+"; 
			break;
		}
		case 4:{
			//CUATRO
			numbers[0] = "+   +";
          	numbers[1] = "|   |";
          	numbers[2] = "|   |";
          	numbers[3] = "+---+";
          	numbers[4] = "    |";
          	numbers[5] = "    |";
          	numbers[6] = "    +"; 
			break;    
		}
		case 5:{
			//CINCO
			numbers[0] = "+---+";
          	numbers[1] = "|    ";
          	numbers[2] = "|    ";
          	numbers[3] = "+---+";
          	numbers[4] = "    |";
          	numbers[5] = "    |";
          	numbers[6] = "+---+"; 
			break;
		}
		case 6:{
			//SEIS
			numbers[0] = "+---+";
          	numbers[1] = "|    ";
          	numbers[2] = "|    ";
          	numbers[3] = "+---+";
          	numbers[4] = "|   |";
          	numbers[5] = "|   |";
          	numbers[6] = "+---+"; 
			break;
		}
		case 7:{
			//SIETE
			numbers[0] = "+---+";
          	numbers[1] = "    |";
          	numbers[2] = "    |";
          	numbers[3] = "    +";
          	numbers[4] = "    |";
          	numbers[5] = "    |";
          	numbers[6] = "    +"; 
			break;
		}
		case 8:{
			//OCHO
			numbers[0] = "+---+";
          	numbers[1] = "|   |";
          	numbers[2] = "|   |";
          	numbers[3] = "+---+";
          	numbers[4] = "|   |";
          	numbers[5] = "|   |";
          	numbers[6] = "+---+"; 
			break;
		}
		case 9:{
			//NUEVE
			numbers[0] = "+---+";
          	numbers[1] = "|   |";
          	numbers[2] = "|   |";
          	numbers[3] = "+---+";
          	numbers[4] = "    |";
          	numbers[5] = "    |";
          	numbers[6] = "+---+"; 
			break;
		}
	}	

	return numbers;
}

void join(vector<string> num, vector<string> &ans, int lim){
	for(int i=0; i<7; i++){
		for (int j = lim, index = 0; j < (lim+5); index++, j++){
			ans[i][j] = num[i][index];
		}
	}
}

void view_display(vector<string> &ans){
	for(int i=0; i<7; i++){
		for(int j=0; j<29; j++){
			cout<<ans[i][j];
		}
		cout<<endl;
	}
}

void solve(string &s){
	vector<string> ans(7,init);

	//Primer digito
	join(build(s[0]),ans,0);

	//Segundo digito
	join(build(s[1]),ans,7);

	//Puntos
	ans[2][14] = 'o';
	ans[4][14] = 'o';

	//Tercer digito
	join(build(s[3]),ans,17);

	//Cuarto digito;
	join(build(s[4]),ans,24);

	view_display(ans);
	cout<<endl<<endl;

}

int main(){
	fast;
	string s;
	while(cin>>s && s != "end"){
		solve(s);
	}
	cout<<"end"<<endl;
	return 0;
}