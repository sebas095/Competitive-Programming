#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

class Sort {
private:
  vector<int> v;
  int swaps;
public:
  Sort(vector<int> &a) : v(a), swaps(0) {}
  void bubbleSort() {
    for (int i = 0; i < v.size(); i++) {
      int numberOfSwaps = 0;

      for (int j = 0; j < v.size() - 1; j++) {
        if (v[j] > v[j + 1]) {
          swap(v[j], v[j + 1]);
          numberOfSwaps++;
        }
      }

      swaps += numberOfSwaps;
      if (!numberOfSwaps) break;
    }
  }
  void print() {
    cout << "Array is sorted in " << swaps << " swaps." << endl;
    cout << "First Element: " << v[0] << endl;
    cout << "Last Element: " << v.back() << endl;
  }
};

int main() {
  fast;
  int n;
  cin >> n;

  vector<int> a(n);
  for(int a_i = 0; a_i < n; a_i++) cin >> a[a_i];

  Sort* mySort = new Sort(a);
  mySort->bubbleSort();
  mySort->print();

  return 0;
}
