#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

vector<int> humble(5844,0);

string toStr(int &n) {
  stringstream ss;
  ss << n;
  return ss.str();
}

void gen() {
  int p1, p2, p3, p4;
  long h1, h2, h3, h4;
  p1 = p2 = p3 = p4 = humble[1] = 1;

  for (int i = 2; i < humble.size(); i++) {
    h1 = 2 * humble[p1];
    h2 = 3 * humble[p2];
    h3 = 5 * humble[p3];
    h4 = 7 * humble[p4];
    humble[i] = min(min(h1, h2), min(h3, h4));

    if (humble[i] == h1) p1++;
    if (humble[i] == h2) p2++;
    if (humble[i] == h3) p3++;
    if (humble[i] == h4) p4++;
  }
}

int main() {
  fast;
  gen();
  int n;
  while (cin >> n and n) {
    string ans = "The " + toStr(n);
    if ((n % 10) == 1 and (n / 10 ) % 10 != 1) ans += "st";
    else if ((n % 10) == 2 and (n / 10) % 10 !=1) ans += "nd";
    else if ((n % 10) == 3 and (n / 10) % 10 !=1) ans += "rd";
    else ans += "th";
    cout << ans << " humble number is " << humble[n] << "." << endl;
  }
  return 0;
}
