#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int next_int() {
  string buffer;
  getline(cin, buffer);
  return atoi(buffer.c_str());
}

int max_size(vector<string> &v) {
  int ans = 0;
  for (int i = 0; i < v.size(); i++)
    ans = max(ans, (int)v[i].size());
  return ans;
}

int main() {
  fast;
  int n, nc = 0;
  while(true) {
    n = next_int();
    if (n == 0) break;
    if (n != 0 and nc > 0) cout << endl;

    nc++;
    int index = 0, maxi = 0;
    vector<string> text(n);
    string s, tmp;

    while (n--) {
      getline(cin, s);
      stringstream ss(s);
      while(ss >> tmp) {
        text[index] += tmp + " ";
      }
      text[index].resize(text[index].size() - 1);
      index++;
    }

    maxi = max_size(text);
    int cont = 0;

    for (int i = 0; i < text.size(); i++) {
      cont = 0;
      if (text[i].size() != maxi) {
        cont = maxi - text[i].size();
        while (cont--) {
          cout << " ";
        }
      }
      cout << text[i] << endl;
    }
  }
  return 0;
}
