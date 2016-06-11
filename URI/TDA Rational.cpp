#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

struct frac {
  int num, den;

  frac() {}

  frac(int a, int b) : num(a), den(b) { check();}

  void check() {
    if ((num < 0 and den < 0) or (num > 0 and den < 0)) {
      num *= -1;
      den *= -1;
    }
  }

  void simplify() {
    int g = __gcd(num, den);
    num /= g;
    den /= g;
    check();
  }

  frac operator + (frac &x) {
    return frac(num * x.den + den * x.num, den * x.den);
  }

  frac operator - (frac &x) {
    return frac(num * x.den - den * x.num, den * x.den);
  }

  frac operator * (frac &x) {
    return frac(num * x.num, den * x.den);
  }

  frac operator / (frac &x) {
    return frac(num * x.den, x.num * den);
  }

  void print () {
    cout << num << "/" << den;
  }
};

int main() {
  fast;
  int t, num1, den1, num2, den2;
  char trash, op;
  cin >> t;

  while (t--) {
    cin >> num1 >> trash >> den1 >> op >> num2 >> trash >> den2;
    frac a(num1, den1);
    frac b(num2, den2);
    frac c;

    if (op == '+') {
      c = a + b;
    }
    else if (op == '-') {
      c = a - b;
    }
    else if (op == '*') {
      c = a * b;
    }
    else if (op == '/') {
      c = a / b;
    }

    c.print(); c.simplify();
    cout << " = ";
    c.print();
    cout << endl;
  }

  return 0;
}
