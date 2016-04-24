#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

void hashtag(int n) {
  for (int i = 0; i < n; i++)
    cout << "#";
}

void space(int n) {
  for (int i = 0; i < n; i++)
    cout << " ";
}

int main() {
  fast;
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    space(n - 1 - i);
    hashtag(i + 1);
    cout << endl;
  }

  return 0;
}
