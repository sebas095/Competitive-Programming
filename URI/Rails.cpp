#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, index;

  while (cin >> n and n) {
    vector<int> rails(n);

    while (cin >> rails[0] and rails[0]) {
      index = 0;
      stack<int> st;

      for (int i = 1; i < n; i++) cin >> rails[i];
      for (int i = 1; i <= n; i++) {
        st.push(i);
        while (!st.empty() and rails[index] == st.top()) {
          index++;
          st.pop();
        }

      }

      cout << ((st.empty())? "Yes" : "No") << endl;

    }
    cout << endl;
  }

  return 0;
}
