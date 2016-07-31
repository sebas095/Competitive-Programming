#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

vector<int> primes;

void sieve() {
  vector<bool> seen(100020, false);
  seen[0] = seen[1] = true;

  for (int i = 2; i < 100020; i++) {
    if (!seen[i]) primes.push_back(i);
    for (int j = i * i; j < seen.size(); j += i) {
      seen[j] = true;
    }
  }
}

int main() {
  fast;
  sieve();
  int n;

  while (cin >> n and n) {
    int id = 0, p;
    vector<int> num(n);

    for (int i = 0; i < n; i++) num[i] = i + 1;
    p = (primes[id] - 1) % num.size();
    if (n > 1) {
      do {
        id++;
        num.erase(num.begin() + p);
        p = (p + primes[id] - 1) % num.size();
      } while (num.size() > 1);
    }

    cout << num[0] << endl;
  }

  return 0;
}
