#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int next_int() {
  string buffer;
  getline(cin, buffer);
  return atoi(buffer.c_str());
}

int main() {
  fast;
  string s;
  int n, cont = 0;;
  double average = 0.0;
  cout << fixed;
  cout.precision(1);

  while (getline(cin, s)) {
    n = next_int();
    cont++;
    average += n;
  }

  cout << (average / (double)(cont)) << endl;
  return 0;
}
