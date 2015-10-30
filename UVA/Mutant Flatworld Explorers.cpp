#include <bits/stdc++.h>
#define LEFT -1
#define RIGHT 1

using namespace std;

pair<int,int> coord[] = {make_pair(0,1),make_pair(1,0),make_pair(0,-1),make_pair(-1,0)};
int start;

int orientation(char c){
	if(c =='N')return 0;
	if(c =='S')return 2;
	if(c =='E')return 1;
	if(c =='W')return 3;
}

char getDirection(int mov){
	if(mov == 0)return 'N';
	if(mov == 2)return 'S';
	if(mov == 1)return 'E';
	if(mov == 3)return 'W';
}

pair<int,int> moves(int dir){
	if(dir == LEFT){
		start += LEFT;
		if(start < 0)start = 3; 
	}
	else{
		if(dir == RIGHT){
			start += RIGHT;
			if(start > 3)start = 0;
		}
	}
	return coord[start];
}

int main(){
	set<pair<int, int> > scent;
	int xf, yf; //Tablero
	int xi, yi; //Robot
	char ori; //Orientacion
	string instr; // instrucciones
	cin>>xf>>yf;
	while(cin>>xi>>yi>>ori>>instr){
		int nx,ny;
		bool lost = false;
		bool follow = true;
		start = orientation(ori);
		char end = start;
		pair<int,int> newMov = coord[start];
		for(int i=0; i<instr.size(); i++){
			if(instr[i] == 'L'){
				newMov = moves(LEFT);
				if(!lost)end=start;
			}
			else if(instr[i] == 'R'){
				newMov = moves(RIGHT);
				if(!lost)end=start;
			}
			else if(instr[i] == 'F'){
				//cout<<"x: "<<xi<<" y: "<<yi<<" orien:"<<getDirection(start)<<endl;
				//end = getDirection(start);
				nx = newMov.first;
				ny = newMov.second;
				if((xi+nx)<0 || (xi+nx)>xf || (yi+ny)<0 || (yi+ny)>yf){
					if(!scent.count(make_pair(xi,yi))){
						scent.insert(make_pair(xi,yi));
						lost = true;
						follow = false;
					}

				}
				else{
					if(follow){
						xi += nx;
						yi += ny;
					}
				}
			}
		}
		cout<<xi<<" "<<yi<<" "<<getDirection(end);
		(lost)? cout<<" Lost"<<endl:cout<<endl;
	}
	return 0;
}