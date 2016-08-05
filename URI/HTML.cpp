#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

void solve(vector<string> &text) {
  string hr = string(80, '-');
  string line = "";
  bool sp = false;
  int size_text = 0;

  for (int i = 0; i < text.size(); i++) {
    if (text[i] == "<hr>") {
      if (size_text) cout << endl;
      cout << hr << endl;
      size_text = 0;
      sp = false;
    }
    else if (text[i] == "<br>") {
      cout << endl;
      size_text = 0;
      sp = false;
    }
    else {
      if (sp + size_text + text[i].size() <= 80) {
        if (sp + size_text + text[i].size() == 80) {
          if (sp) cout << " ";
          cout << text[i] << endl;
          size_text = 0;
          sp = false;
        }
        else {
          if (sp) cout << " ";
          cout << text[i];
          size_text += text[i].size() + sp;
          sp = true;
        }
      }
      else {
        cout << endl;
        cout << text[i];
        size_text = text[i].size();
        sp = true;
      }
    }
  }
}

int main() {
  fast;
  string line;
  vector<string> text;
  while (cin >> line) text.push_back(line);
  solve(text); cout << endl;
  return 0;
}
