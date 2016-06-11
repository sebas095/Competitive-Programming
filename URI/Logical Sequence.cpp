#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

struct terna {
  int x, y, z;
  terna(int x, int y, int z): x(x), y(y), z(z) {}
  terna() {}
};

int main() {
  fast;
  int n, j = 0;
  cin >> n;
  vector<terna> seq(n << 1);

  for (int i = 0; i < (n << 1); i++) {
    if (!(i & 1)) j++;
    seq[i].x = j;
    seq[i].y = (i & 1)? (j * j) + 1 : (j * j);
    seq[i].z = (i & 1)? (j * j * j) + 1 : (j * j * j);
  }

  for (int i = 0; i < (n << 1); i++) {
    cout << seq[i].x << " " << seq[i].y << " " << seq[i].z << endl;
  }

  return 0;
}
