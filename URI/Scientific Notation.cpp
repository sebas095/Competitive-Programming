#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
  long double n;
  scanf("%LE", &n);
  if (to_string(n)[0] != '-') printf("+");
  printf("%.4LE\n", n);
  return 0;
}
