#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

void spaces(int n) {
  while (n--) cout << " ";
}

void solve(vector<string> &words, int max_size) {
  for (int i = 0; i < words.size(); i++) {
    if (words[i].size() == max_size) {
      cout << words[i] << endl;
    }
    else {
      spaces(max_size - words[i].size());
      cout << words[i] << endl;
    }
  }
}

int main() {
  fast;
  int n, tc = 0;

  while(cin >> n and n) {
    if (tc) cout << endl;
    vector<string> words(n);
    int max_size = 0;
    tc++;

    for (int i = 0; i < n; i++) {
      cin >> words[i];
      max_size = max(max_size, (int)words[i].size());
    }
    solve(words, max_size);
  }
  return 0;
}
