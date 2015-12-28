#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'
#define npos string::npos

using namespace std;

int main() {
  fast;
  int ans = 0;
  string open = "[{(<", s;
  stack <char> st;
  map <char, char> close;

  close['['] = ']';
  close['{'] = '}';
  close['('] = ')';
  close['<'] = '>';

  cin >> s;
  if (s.size() & 1) ans = -1;
  else {
    for (int i = 0; i < s.size(); i++) {
      if (open.find(s[i]) != npos)
        st.push(s[i]);
      else {
        if (!st.empty()) {
          if (close[st.top()] == s[i])
            st.pop();
          else {
            st.pop();
            ans++;
          }
        }
        else {
          ans = -1;
          break;
        }
      }
    }
  }

  (ans != -1 and st.empty())? cout << ans << endl : cout << "Impossible" << endl;
  return 0;
}
