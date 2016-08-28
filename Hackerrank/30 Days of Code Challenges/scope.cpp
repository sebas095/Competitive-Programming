#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

class Difference {
private:
  vector<int> elements;
public:
	int maximumDifference;
  Difference (vector<int> &el) : elements(el) {}
  void computeDifference() {
    sort(elements.begin(), elements.end());
    maximumDifference = abs(elements[0] - elements.back());
  }
};

int main() {
  int N;
  cin >> N;
  vector<int> a;

  for (int i = 0; i < N; i++) {
    int e;
    cin >> e;
    a.push_back(e);
  }

  Difference d(a);
  d.computeDifference();
  cout << d.maximumDifference;

  return 0;
}
