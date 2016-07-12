#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

struct problem {
  int t;
  bool ok;
  string status;

  problem() : t(0), status(""), ok(false) {}

  bool is_accepted() {
    return status == "correct";
  }

  void wrong() {
    t += 20;
  }
};

int main() {
  fast;
  int tc, t;
  char id;
  string status;

  while (cin >> tc and tc) {
    int solve = 0, ttotal = 0;
    vector<problem> p(30);

    for (int i = 0; i < tc; i++) {
      cin >> id >> t >> status;

      int index = id - 'A';
      p[index].status = status;

      if (!p[index].is_accepted() and !p[index].ok) {
        p[index].wrong();
      }
      else if (p[index].is_accepted()){
        if (!p[index].ok) {
          solve++;
          ttotal += t + p[index].t;
        }
        p[index].ok = true;
      }
    }

    cout << solve << " " << ttotal << endl;
  }

  return 0;
}
