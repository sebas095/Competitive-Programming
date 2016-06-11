#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

struct entry {
  string name;
  int a, t;
};

int main() {
  fast;
  int n;

  while (cin >> n and n) {
    vector<entry> msj(n);
    string ans = "";
    int mini = 99999;

    for (int i = 0; i < n; i++) {
      cin >> msj[i].name >> msj[i].a >> msj[i].t;
    }

    for (int i = 0; i < n; i++) {
      if ((msj[i].a - msj[i].t) < mini) {
        mini = msj[i].a - msj[i].t;
        ans = msj[i].name;
      }
    }

    cout << ans << endl;
  }

  return 0;
}
