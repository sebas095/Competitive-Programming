#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, num;
  vector<int> div(4, 0);
  cin >> n;

  while (n--) {
    cin >> num;
    if (num % 2 == 0) div[0]++;
    if (num % 3 == 0) div[1]++;
    if (num % 4 == 0) div[2]++;
    if (num % 5 == 0) div[3]++;
  }

  for (int i = 0; i < 4; i++) {
    cout << div[i] << " Multiplo(s) de " << i + 2 << endl;
  }

  return 0;
}
