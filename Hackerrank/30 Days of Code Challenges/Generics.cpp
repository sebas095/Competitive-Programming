#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

template <typename T>
void printArray(vector<T> &v) {
  for (const auto &it : v) {
    cout << it << endl;
  }
}

int main() {
  fast;
  vector<int> vInt{1, 2, 3};
  vector<string> vString{"Hello", "World"};

  printArray<int>(vInt);
  printArray<string>(vString);

  return 0;
}
