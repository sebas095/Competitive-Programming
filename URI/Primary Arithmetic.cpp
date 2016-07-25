#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int solve(long int a, long int b) {
  int carry = 0, acc = 0, aux1, aux2, result = 0;

  while (a != 0 or b != 0) {
    aux1 = a % 10;
    aux2 = b % 10;

    a /= 10;
    b /= 10;

    result = aux1 + aux2 + acc;
    if (result >= 10) {
      carry++;
      acc = 1;
    }
    else acc = 0;
  }


  return carry;
}

int main() {
  fast;
  long int a, b;

  while (cin >> a >> b and a + b) {
    long int carry = solve(a, b);
    if (carry) {
      cout << carry << " carry operation" << ((carry > 1)? "s." : ".") << endl;
    }
    else cout << "No carry operation." << endl;
  }

  return 0;
}
