#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

bool solve(int a, int b, int c) {
  if(a > b) {
    if(b > c) {
      if((b - c) < (a - b)) return true;
      else return false;
    }
    else return true;
  }
  else if(b > a) {
    if(c > b) {
      if((c - b) < (b - a)) return false;
      else return true;
    }
    else return false;
  }
  else if(a == b and c > b) return true;
  else return false;
}

int main() {
  fast;
  int a, b, c;
  while (cin >> a >> b >> c) {
    cout << (solve(a, b, c)? ":)" : ":(") << endl;
  }
  return 0;
}
