#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, element, sum = 0;
  cin >> n;
  int lDiag = 0, rDiag = n - 1, middle = (n - 1) / 2;

  for (int i = 0; i < n; i++, rDiag--, lDiag++) {
    for (int j = 0; j < n; j++) {
      cin >> element;
      if(i == middle or j == middle or j == lDiag or j == rDiag)
        sum += element;
    }    
  }

  cout << sum <<endl;
  return 0;
}
