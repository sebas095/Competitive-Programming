#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

vector<int> ans;

void calc() {
  for (int i = 0; i <= 5000; i++) {
    ans.push_back(i * i);
  }
}

int main() {
  fast;
  int n;
  calc();
  while (cin >> n and n) {
    for (int i = 1; i <= sqrt(n); i++) {
      if (i > 1) cout << " ";
      cout << ans[i];
    }
    cout << endl;
  }
  return 0;
}
