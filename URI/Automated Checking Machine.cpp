#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  vector<int> con1(5), con2(5);
  bool ok = false;

  for (int i = 0; i < 5; i++) cin >> con1[i];
  for (int i = 0; i < 5; i++) cin >> con2[i];

  for (int i = 0; i < 5; i++) {
    if (con1[i] ^ con2[i]) {
      ok = true;
    }
    else {
      ok = false;
      break;
    }
  }

  cout << ((ok)? "Y" : "N") << endl;
  return 0;
}
