#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int acc[2] = {1, 3};
vector<int> ans(10005);

void calc() {
  bool index = false;
  ans[0] = 0;
  ans[1] = 1;
  ans[2] = 2;
  ans[3] = 5;

  for (int i = 4; i < ans.size(); i++) {
    ans[i] = ans[i - 1] + acc[index];
    index = !index;
  }
}

int main() {
  fast;
  calc();
  int n, num;

  while (cin >> n and n) {
    while (n--) {
      cin >> num;
      cout << ans[num] << endl;
    }
  }

  return 0;
}
