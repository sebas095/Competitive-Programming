#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  set<string> dictionary;
  string text;

  while (getline(cin, text)) {
    string tmp;

    for (int i = 0; i < text.size(); i++) {
      if ((text[i] >= 'a' and text[i] <= 'z') or (text[i] >= 'A' and text[i] <= 'Z')) {
        text[i] = tolower(text[i]);
      }
      else if (text[i] != ' ') text[i] = ' ';
    }

    stringstream ss(text);
    while (ss >> tmp) {
      dictionary.insert(tmp);
    }
  }

  for (auto &it : dictionary) {
    cout << it << endl;
  }

  return 0;
}
