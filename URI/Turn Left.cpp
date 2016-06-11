#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  char dir[4] = {'N', 'L', 'S', 'O'};
  int n;
  string s;

  while (cin >> n and n) {
    cin >> s;
    int index = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == 'D') {
        index++;
        index %= 4;
      }
      else {
        index--;
        if (index < 0) index += 4;
      }
    }
    cout << dir[index] << endl;
  }

  return 0;
}
