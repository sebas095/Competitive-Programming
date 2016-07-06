#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define npos string::npos

using namespace std;

void upper_case(string &s) {
  transform(s.begin(), s.end(), s.begin(), ::toupper);
}

int main() {
  fast;
  string tag, code;

  while (getline(cin, tag)) {
    string text, otext, otag;
    getline(cin, code);
    getline(cin, text);

    otext = text;
    otag = tag;

    upper_case(otag);
    upper_case(otext);

    for (int i = 0; i < otext.size(); i++) {
      if (otext[i] == '<') {
        int last = otext.find('>', i);
        int index;

        while ((index = otext.find(otag, i)) != npos and index < last) {
          text.replace(index, otag.size(), code);
          otext.replace(index, otag.size(), code);
          last =  otext.find('>', i);
        }
      }
    }

    cout << text << endl;
  }

  return 0;
}
