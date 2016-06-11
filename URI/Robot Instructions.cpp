#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int next_int() {
  string buffer;
  getline(cin, buffer);
  return atoi(buffer.c_str());
}

int main() {
  fast;
  int t, n;
  string val;
  t = next_int();

  while (t--) {
    n = next_int();
    int ans = 0;
    vector<string> inst(n);

    for (int i = 0; i < n; i++) {
      getline(cin, val);
      if (val == "LEFT" or val == "RIGHT")
        inst[i] = val;
      else {
        val = val.substr(8);
        inst[i] = inst[atoi(val.c_str()) - 1];
      }
    }

    for (int i = 0; i < n; i++) {
      if (inst[i] == "LEFT")       ans--;
      else if (inst[i] == "RIGHT") ans++;
    }
    cout << ans << endl;
  }

  return 0;
}
