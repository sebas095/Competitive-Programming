#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

struct MyException : public exception {
  const char* what() const throw() {
    return "n and p should be non-negative";
  }
};

class Calculator {
public:
  int power(int n, int p) {
    if (n < 0 or p < 0) throw MyException();
    return pow(n, p);
  }
};

int main() {
  Calculator myCalculator = Calculator();
  int T, n, p;
  cin >> T;

  while( T--) {
    if (scanf("%d %d", &n, &p) == 2) {
      try {
        int ans = myCalculator.power(n, p);
        cout << ans << endl;
      }
      catch (exception& e) {
       cout << e.what() << endl;
      }
    }
  }

  return 0;
}
