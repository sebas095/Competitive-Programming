#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main() {
  fast;
  int sospe;
  while(cin >> sospe and sospe) {
    vector<int> vec(sospe), aux(sospe);

    for(int i = 0; i < sospe; i++) {
      cin >> vec[i];
      aux[i] = vec[i];
    }

    sort(vec.begin(), vec.end());
    for(int i = 0; i < sospe; i++) {
      if(vec[sospe - 2] == aux[i]) {
        cout << i + 1 << endl;
        break;
      }
    }
  }

  return 0;
}
