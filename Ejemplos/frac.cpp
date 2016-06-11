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
