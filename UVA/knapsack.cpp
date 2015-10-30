#include <bits/stdc++.h>

using namespace std;

int max_weight = 40; //Peso maximo de la mochila
int max_n = 1000; //Numero maximo de objetos
int n; //Numero de objetos
int prices[max_n]; //Costo de cada objeto
int weights[max_n]; //Pesos de cada objeto
int memo[max_n][max_weight];

//La funcion debe llamarse con 0 en index y la capacidad de la mochila en w
//Inicializar a memo en -1
int knapsack(int index, int w){
	if(index == n || w == 0) return 0;
	if(memo[index][w] != -1) return memo[index][w];
	ans = -1;
	if(weights[index] > w)
		ans = knapsack(index + 1, w);
	else{
		ans = max(knapsack(index + 1,w), prices[index] + knapsack(index + 1, w - weights[index]));
	}

	return memo[index][w] = ans;

}