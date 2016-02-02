#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n;
  cin >> n;

  while (n--) {
    string s;
    int ans = 0;
    stack<char> st;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '<') st.push('<');
      if (s[i] == '>') {
        if (st.empty()) continue;
        st.pop();
        ans++;
      }
    }

    cout << ans << endl;
  }

  return 0;
}
