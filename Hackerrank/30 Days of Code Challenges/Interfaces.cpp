#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

class AdvancedArithmetic {
public:
  virtual int divisorSum(int n) = 0;
};

class Calculator : public AdvancedArithmetic {
public:
  int divisorSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
      if (n % i == 0) sum += i;
    }
    return sum;
  }
};

int main() {
  fast;
  int n;
  cin >> n;
  AdvancedArithmetic *myCalculator = new Calculator();
  int sum = myCalculator->divisorSum(n);
  cout << "I implemented: AdvancedArithmetic\n" << sum << endl;
  return 0;
}
