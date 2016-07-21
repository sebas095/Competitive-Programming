#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  string line;

  while (getline(cin, line)) {
    stringstream ss(line);
    long long n, t; char c;
    ss >> n >> t >> c;

    t *= (c == 'L')? -1 : 1;

    string up, down, mid;
    getline(cin, up);
    getline(cin, mid);
    getline(cin, down);

    string s = "";
    for (int i = 1; i < mid.size(); i += 2) s += mid[i];

    string target = s;
    int len = target.size();

    for (int i = 0; i < s.size(); ++i) {
      target[(((i + t) % len) + len) % len] = s[i];
    }

    for (int i = 0, j = 1; i < target.size(); ++i, j += 2) {
      mid[j] = target[i];
    }

    cout << up << endl;
    cout << mid << endl;
    cout << down << endl;
  }
  return 0;
}
