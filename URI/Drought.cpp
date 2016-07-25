#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, nc = 1, a, b, av, count, flp;
  bool line = false;
  double intp;

  while (cin >> n and n) {
    if (line) cout << endl;
    line = true;

    av = count = 0;
    vector<int> buckets(300, 0);

    for (int i = 0; i < n; i++) {
      cin >> a >> b;
      av += b;
      count += a;
      buckets[b / a] += a;
    }

    cout << "Cidade# " << nc++ << ":" << endl;

    for (int i = 0, j = 0; i < 300; i++) {
      if (buckets[i]) {
        if (j) cout << " ";
        cout << buckets[i] << "-" << i;
        j++;
      }
    }

    cout << endl;
    flp = (int)(modf((double)av / count, &intp) * 100);

    if (flp < 10) {
      cout << "Consumo medio: " << (int)intp << ".0" << (int)flp << " m3." << endl;
    }
    else {
      cout << "Consumo medio: " << (int)intp << "." << (int)flp << " m3." << endl;
    }
  }

  return 0;
}
