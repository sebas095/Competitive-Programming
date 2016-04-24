#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int solveMeFirst(int a, int b) {
  return a + b;
}

int main() {
  int num1, num2, sum;
  cin >> num1 >> num2;
  sum = solveMeFirst(num1, num2);
  cout << sum << endl;
  return 0;
}
