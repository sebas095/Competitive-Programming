#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

typedef long long ll;

int main() {
  fast;
  ll age;
  double average = 0.0, n = 0.0;

  while (cin >> age and age >= 0) {
    average += age;
    n++;
  }
  cout << fixed << setprecision(2) << average / n << endl;
  return 0;
}
