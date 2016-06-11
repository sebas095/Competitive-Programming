#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

using namespace std;

int main() {
  fast;
  string s;

  while (cin >> s) {
    string s;
    bool ok = true;
    stack<char> st;

    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '(') st.push('(');
      else if (s[i] == ')') {
        if (st.empty()) {
        	ok = false;
        	break;
        }
        st.pop();
      }
    }

    cout << ((ok and st.empty())? "correct" : "incorrect") << endl;
  }

  return 0;
}