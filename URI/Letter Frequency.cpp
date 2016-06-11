#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int nextInt() {
  string buffer;
  getline(cin, buffer);
  return atoi(buffer.c_str());
}

int main() {
  fast;
  int n;
  string s;
  n = nextInt();

  while (n--) {
    getline(cin, s);
    int maxi = 0;
    vector<int> frec(26, 0);

    for (int i = 0; i < s.size(); i++) {
      if ((s[i] >= 'a' and s[i] <= 'z') or (s[i] >= 'A' and s[i] <= 'Z')) {
        s[i] = tolower(s[i]);
        frec[s[i] - 'a']++;
      }
    }

    for (int i = 0; i < 26; i++) {
      maxi = max(maxi, frec[i]);
    }

    for (int i = 0; i < 26; i++) {
      if (frec[i] == maxi) {
        cout << (char)(i + 'a');
      }
    }
    cout << endl;
  }

  return 0;
}
