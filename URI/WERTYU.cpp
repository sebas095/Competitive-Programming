#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

const string decode = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

int main() {
  fast;
  string line;

  while (getline(cin, line)) {
    for (int i = 0; i < line.size(); i++) {
      if (line[i] == ' ') cout << " ";
      else {
        for (int j = 0; j < decode.size(); j++) {
          if (line[i] == decode[j]) {
            cout << decode[j - 1];
            break;
          }
        }
      }
    }
    cout << endl;
  }

  return 0;
}
