#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

vector<int> sieve(5003, 0);

bool is_diferent(int n) {
  stringstream ss;
  ss << n;
  string s = ss.str();
  set<char> st;
  for (int i = 0; i < s.size(); i++) {
    st.insert(s[i]);
  }
  return st.size() == s.size();
}

void calc() {
  for (int i = 1; i < sieve.size(); i++) {
    if (is_diferent(i)) {
      sieve[i] = 1;
    }
  }

  for (int i = 1; i < sieve.size(); i++) {
    sieve[i] += sieve[i - 1];
  }
}

int main() {
  fast;
  calc();
  int a, b;

  while (cin >> a >> b) {
    cout << sieve[b] - sieve[a - 1] << endl;
  }

  return 0;
}
