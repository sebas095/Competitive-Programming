#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n, ans = 0;
  char a, b, c, d, aa, bb, cc, dd;
  stack<char> st;
  cin >> n;

  while (n--) {
    cin >> a >> b >> c >> d;
    if (st.empty()) {
      st.push('F'); st.push('A');
      st.push('C'); st.push('E');
    }

    dd = st.top(); st.pop();
    cc = st.top(); st.pop();
    bb = st.top(); st.pop();
    aa = st.top(); st.pop();

    if (dd == a and cc == b and bb == c and aa == d) ans++;
    else {
      st.push(aa); st.push(bb);
      st.push(cc); st.push(dd);
      st.push(a); st.push(b);
      st.push(c); st.push(d);
    }
  }

  cout << ans << endl;
  return 0;
}
