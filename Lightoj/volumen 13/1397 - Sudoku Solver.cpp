#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int board[9][9];

void printTable(int k) {
  printf("Case %d:\n",k);
  for (int i = 0; i < 9; i++){
    for (int j = 0; j < 9; j++){
      printf("%d", board[i][j]);
    }
    printf("\n");
  }
}

//Chequeamos que el valor v no este usada en la fila,columna o cuadrante
bool check(int r, int c, int v) {

  for (int i = 0; i < 9; i++)
    if (board[r][i] == v or board[i][c] == v) return false;

  int init_i = (r / 3) * 3;
  int init_j = (c / 3) * 3;

  for (int i = 0; i < 3; ++i)
    for (int j = 0; j < 3; ++j)
      if (board[init_i + i][init_j + j] == v) return  false;

  return true;
}

bool find_best(int &r, int &c) {
  int best = 1000;
  for (int i = 0; i < 9; ++i) {
    for (int j = 0; j < 9; ++j) {
      if (board[i][j] != 0) continue;

      int cur = 0;
      for (int k = 1; k < 10; k++)
        //Miramos cuantos formas validas se puede poner los valores k en la casilla (i,j)
        if (check(i, j, k))cur++;

      if (cur < best) {
        r = i;
        c = j;
        best = cur;
      }
    }
  }

  if (best < 10) return true;
  return false;
}

bool solve() {

  int i, j;
  if (!find_best(i, j))
    return true;
  for (int k = 1; k < 10; ++k) {
    if (!check(i, j, k)) continue;
    board[i][j] = k;
    if (solve())
      return true;
  }
  board[i][j] = 0;
  return false;
}

int main() {
  fast;
  int cases; 
  cin >> cases;
  for (int k = 1; k <= cases; k++) {
    char number;
    for (int i = 0; i < 9; ++i){
      for (int j = 0; j < 9; ++j) {
        cin >> number;
        board[i][j] =  (number == '.')?  0 : (number - '0');
      }
    }
    solve();
    printTable(k);
  }

  return 0;
}