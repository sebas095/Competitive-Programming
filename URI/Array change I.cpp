#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n[20];
  for (int i = 0; i < 20; i++) cin >> n[i];
  for (int i = 0, j = 19; i < 20 and j >= 0; i++, j--) {
    cout << "N[" << i <<"] = " << n[j] << endl;
  }
  return 0;
}
