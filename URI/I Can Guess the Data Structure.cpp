#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t, type, val;

  while (cin >> t) {
    queue<int> q;
    stack<int> st;
    priority_queue<int> pq;
    bool is_st = true, is_q = true, is_pq = true;

    while (t--) {
      cin >> type >> val;
      if (type == 1) {
        if (is_st) st.push(val);
        if (is_q)  q.push(val);
        if (is_pq) pq.push(val);
      }
      else {
        if (is_st) {
          if (st.empty() || st.top() != val) {
            is_st = false;
          }
          else st.pop();
        }
        if (is_pq) {
          if (pq.empty() || pq.top() != val) {
            is_pq = false;
          }
          else pq.pop();
        }
        if (is_q) {
          if (q.empty() || q.front() != val) {
            is_q = false;
          }
          else q.pop();
        }
      }
    }
    if (is_st and !is_pq and !is_q)       cout << "stack" << endl;
    else if (is_pq and !is_st and !is_q)  cout << "priority queue" << endl;
    else if (is_q and !is_pq and !is_st)  cout << "queue" << endl;
    else if (!is_st and !is_q and !is_pq) cout<< "impossible" << endl;
    else                                  cout << "not sure" << endl;
  }

  return 0;
}
