#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

string check(int n) {
  string ans = to_string(n);
  if (n > 9) return ans;
  return "0" + ans;
}

int main() {
  fast;
  int n, h, m, o;
  cin >> n;

  while (n--) {
    string door;
    cin >> h >> m >> o;
    door = (o)? "abriu!" : "fechou!";
    cout << check(h) << ":" << check(m) << " - A porta " << door << endl;
  }

  return 0;
}
