#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int nextInt() {
  string buffer;
  getline(cin, buffer);
  return atoi(buffer.c_str());
}

double nextDouble() {
  string buffer;
  getline(cin, buffer);
  return atof(buffer.c_str());
}

int count_tokens(string s) {
  int ans = 0;
  stringstream ss(s);
  string tok;
  while (ss >> tok) ans++;
  return ans;
}

int main() {
  fast;
  int t;
  double val, avP = 0.0, avK = 0.0;
  string s;
  t = nextInt();

  for (int i = 1; i <= t; i++) {
    val = nextDouble();
    avP += val;
    getline(cin, s);
    avK += count_tokens(s);
    cout << "day " << i << ": " << count_tokens(s) << " kg" << endl;
  }

  cout << fixed << setprecision(2) << avK / (double)(t) << " kg by day" << endl;
  cout << "R$ " << avP / (double)(t) << " by day" << endl;

  return 0;
}
