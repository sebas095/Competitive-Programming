#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

double increase(double salary, string &pc) {
  if (salary >= 0.0 and salary <= 400.00) {
    pc = "15 %";
    return salary * 0.15;
  }
  if (salary >= 400.01 and salary <= 800.00) {
    pc = "12 %";
    return salary * 0.12;
  }
  if (salary >= 800.01 and salary <= 1200.00) {
    pc = "10 %";
    return salary * 0.10;
  }
  if (salary >= 1200.01 and salary <= 2000.00) {
    pc = "7 %";
    return salary * 0.07;
  }
  if (salary > 2000) {
    pc = "4 %";
    return salary * 0.04;
  }
}

int main() {
  fast;
  cout << fixed;
  double n, inc;
  string pc;
  cin >> n;
  inc = increase(n, pc);

  cout << "Novo salario: " << setprecision(2) << (inc + n) << endl;
  cout << "Reajuste ganho: " << setprecision(2) << inc << endl;
  cout << "Em percentual: " << pc << endl;

  return 0;
}
