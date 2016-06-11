#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

bool backtrack(vector<int> &lengths, int l_target, int remaining_length, int start_segment, int remaining_segment, int mask) {
  if (remaining_segment == 0) return true;

  int index = (1 << start_segment);
  bool entry = (remaining_length == l_target);

  for (int i = start_segment; i < lengths.size(); i++) {
    if (!(mask & index)) {
      if (lengths[i] == remaining_length) {
        if (backtrack(lengths, l_target, l_target, 0, remaining_segment - 1, mask | index))
          return true;
      }
      else if (lengths[i] < remaining_length) {
        // Dejo la longitud que me hace falta para que el palo se igual a los demas
        if (backtrack(lengths, l_target, remaining_length - lengths[i], i + 1, remaining_segment, mask | index))
          return true;
      }
      if (entry) break;
    }
    index <<= 1;
  }
  return false;
}

int main() {
  fast;
  int t, m, l;
  cin >> t;

  while (t--) {
    cin >> m;
    int acc = 0;
    vector<int> lengths(m);

    for (int i = 0; i < m; i++) {
      cin >> l;
      acc += l;
      lengths[i] = l;
    }

    if (acc % 4) {
      cout << "no" << endl;
    }
    else {
      int length_target = acc / 4;
      if (backtrack(lengths, length_target, length_target, 0, 4, 0)) cout << "yes" << endl;
      else                                                           cout << "no" << endl;
    }

  }
  return 0;
}
