#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int n;

  while (cin >> n) {
    int max_value = 0;
    vector<int> slugs(n);

    for (int i = 0; i < n; i++) cin >> slugs[i];
    max_value = *max_element(slugs.begin(), slugs.end());

    if (max_value < 10)                          cout << "1" << endl;
    else if (max_value >= 10 and max_value < 20) cout << "2" << endl;
    else if (max_value >= 20)                    cout << "3" << endl;
  }

  return 0;
}
