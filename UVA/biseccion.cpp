#include <bits/stdc++.h>
#define EPS 1e-8
using namespace std;

//Iterativo
double biseccion(double d){
	double low = 0, high = d, x = 0;
	//int i = 0; // Numero de iteraciones
	while(fabs(high-low) > EPS){ 
		x = (low + high)/2.0;
		//f(x) = 0.1x^3 + 0.2x^2 + 1.5x - 5 [0,100]
		//double fx = (0.1*x*x*x + 0.2*x*x + 1.5*x - 5); //Hallar el corte con el eje x
		double fx = x*x; //Forma de hallar la inversa de cualquier funcion
		if(fx > d) high = x;
		else low = x;
		//printf("Iter: %d ... X: %.9lf\n",++i,x);
	}
	return x;
}

//Recursivo
double biseccion2(double low, double high, double d){
	double x = (low + high)/2.0;
	double fx = x*x;
	if(fabs(high-low) < EPS)
		return x;
	else if(fx > d)
		return biseccion2(low,x,d);
	else
		return biseccion2(x,high,d);
}


//NEWTON RAPHOSON
// f(x) = 0.1x^3 + 0.2x^2 + 1.5x - 5 [0,100]
//Metodo de Newton: g(Xn) = Xn - f(Xn)/f'(Xn)

double newton(double y){
	double x;//int iter=0;
	x = y;
	//while(fabs(0.1*x*x*x + 0.2*x*x + 1.5*x - 5) > 1e-10){
		//x=(0.2*x*x*x + 0.2*x*x + 5)/(0.3*x*x + 0.4*x + 1.5);
		//printf("Iter %d:  x=%.10lf\n",++iter,x);
	while(fabs(x*x-y) > 1e-10){
		x=(x*x+y)/(2*x);
		//printf("Iter %d:  x=%.10lf\n",++iter,x);
	}
	return x;

}

int main(){
	cout<<biseccion(100)<<endl;
	cout<<biseccion2(0,100,100)<<endl;
	cout<<newton(400)<<endl;
	return 0;
}