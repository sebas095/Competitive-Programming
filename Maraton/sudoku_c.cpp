#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <list>
#include <vector>
#include <math.h>

using namespace std;


bool BitON(int a, int pos){
	int b= pow(2,pos);
	int c=(a^b)&b;
	if (c==b) return false;
	return true;
}

int BitSwap(int a, int pos){
	int b=pow(2,pos);
	int c=a^b;
	return c;
}

int BitPUT(int a, int pos, int c){
	if(c==1){
		if(BitON(a,pos)){
			return a;
		}
		else{
			return BitSwap(a, pos);
		}
	}
	else{
		if(BitON(a,pos)){
			return BitSwap(a, pos);
		}
		else{
			return a;
		}
	}
}

void Limpiar(vector<int>& w){
	for(int i=0; i<9; i++){
		w[i]=0;
	}
}

bool OK (int m[9][9]){
	vector<int> fila(9,0), columna(9,0), bloque(9,0);
	for(int i=0; i<9; i++){
		Limpiar(fila);
		for(int j=0; j<9; j++){
			int x=m[i][j];
			if(x==0) return false;
			//cout<<fila[j]<<" ";
			if(fila[x-1]==1) return false;
			fila[x-1]=1;
		}
		//cout<<endl;
	}
	for(int i=0; i<9; i++){
		Limpiar(columna);
		for(int j=0; j<9; j++){
			int x=m[j][i];
			if(columna[x-1]==1) return false;
			columna[x-1]=1;
		}
	}

	for (int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			Limpiar(bloque);
			for (int ii=0; ii<3; ii++){
				for (int jj=0; jj<3; jj++){
					int x=m[3*i+ii][3*j+jj];
					if(bloque[x-1]==1) return false;
					bloque[x-1]=1;
				}
			}
		}
	}
	return true;
}

// 1 Habilitado
// 0 Restringido

vector<int> getNUMS(int Num){
	vector<int> values;
	for(int i=0; i<9; i++){
		if(Num%2==1){
			values.push_back(i+1);
		}
		Num=Num>>1;
	}
	return values;
}

void printM(int m[9][9]){
	for(int i=0; i<9; i++){
		for (int j=0; j<9; j++){
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
}

void Copiar(int a[9][9], int b[9][9]){
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			b[i][j]=a[i][j];
		}
	}
}

void printBIN(int n){
	vector<int> pila;
	for(int i=0; i<9; i++){
		if(n%2==1){
			pila.push_back(1);
		}
		else{
			pila.push_back(0);
		}
		n=n>>1;
	}
	for(int i=8; i>=0; i--){
		cout<<pila[i];
	}
}

void Casilla(int& a, int& b, int r[9][9]){
	int num=9, num_back=9, contar=0;
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			num=getNUMS(r[i][j]).size();
			if(num<num_back && num!=0){
				num_back=num;
				a=i;
				b=j;
			}
			if(num==0){
				contar++;
			}
		}
	}
	if(contar==81){
		a=-1;
		b=-1;
	}
}

bool isRestricted(int u){
	for(int i=0; i<9; i++){
		if(u%2==1) return false;
		u=u>>1;
	}
	return true;
}

void Restringir(int r[9][9], int x, int y, int value){
	r[x][y]=0;
	for(int i=0; i<9; i++){
		if(!isRestricted(r[i][y])){
				r[i][y]=BitPUT(r[i][y], value-1, 0);
		}
	}
	for(int j=0; j<9; j++){
		if(!isRestricted(r[x][j])){
				r[x][j]=BitPUT(r[x][j], value-1, 0);
		}
	}

	int auxi=x/3, auxj=y/3;

	for(int ii=0; ii<3; ii++){
		for(int jj=0; jj<3; jj++){
			if(!isRestricted(r[3*auxi+ii][3*auxj+jj])){
				r[3*auxi+ii][3*auxj+jj]=BitPUT(r[3*auxi+ii][3*auxj+jj], value-1, 0);
			}
		}
	}
}

bool Solver(int m[9][9], int r[9][9]){
	if(OK(m)){
		printM(m);
		return true;
	}
	int nm[9][9], nr[9][9];
	int x=0, y=0;
	Casilla(x, y, r);
	if(x==-1&&y==-1){
		return false;
	}

	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			if(m[i][j]==0&&isRestricted(r[i][j])){
				//cout<<"Posicion de ruptura: ("<<i<<","<<j<<")"<<endl;
				return false;
			}
		}
	}
	
	vector<int> posibilidades(getNUMS(r[x][y]));
	for(int i=0; i<posibilidades.size(); i++){
		Copiar(m,nm);
		Copiar(r,nr);
		nm[x][y]=posibilidades[i];
		Restringir(nr, x, y, posibilidades[i]);
		if(Solver(nm,nr)){
			return true;
		}
	}
	return false;
}



void Sudoku (int m[9][9]){
	vector<int> filas(9,65535), columnas(9,65535), cuadrante(9,65535);
	int res[9][9];
	for(int i=0; i<9; i++){
		for (int j=0; j<9; j++){
			if(m[i][j]!=0){
				filas[i]=BitPUT(filas[i],m[i][j]-1,0);
			}
			if(m[j][i]!=0){
				columnas[i]=BitPUT(columnas[i],m[j][i]-1,0);
			}
		}
	}

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			for(int ii=0; ii<3; ii++){
				for(int jj=0; jj<3; jj++){
					if(m[3*i+ii][3*j+jj]!=0){
						cuadrante[3*i+j]=BitPUT(cuadrante[3*i+j], m[3*i+ii][3*j+jj]-1, 0);
					}
				}
			}
		}
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			for(int ii=0; ii<3; ii++){
				for(int jj=0; jj<3; jj++){
					if(m[3*i+ii][3*j+jj]!=0){
						res[3*i+ii][3*j+jj]=0;
					}
					else{
						res[3*i+ii][3*j+jj]=cuadrante[3*i+j]&filas[3*i+ii]&columnas[3*j+jj];
					}
				}
			}
		}
	}
		
	if (Solver(m,res)){
		cout<<endl<<"Tiene solucion"<<endl;
	}
	else{
		cout<<"No tiene solucion"<<endl;
	}

}

int main(){

	int m[9][9];
	for(int i=0; i<9; i++){
		for (int j=0; j<9; j++){
			cin>>m[i][j];
		}
	}
	Sudoku(m);
	return 0;
}