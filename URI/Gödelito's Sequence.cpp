#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

vector<string> seq(42);

void calc() {
  seq[1] = "3";
  seq[2] = "13";

  for (int i = 3; i < seq.size(); i++) {
    string ans = "";
    int frec = 1;

    for (int j = 1; j < seq[i - 1].size(); j++) {
      if (seq[i - 1][j - 1] == seq[i - 1][j]) {
        frec++;
      }
      else {
        if (frec) {
          ans += (frec + '0');
          ans += seq[i - 1][j - 1];
          frec = 1;
        }
      }
    }

    if (frec) {
      ans += (frec + '0');
      ans += seq[i - 1][seq[i - 1].size() - 1];
      frec = 0;
    }

    seq[i] = ans;
  }
}

int main() {
  fast;
  int n;
  calc();

  while (cin >> n) {
    cout << seq[n] << endl;
  }

  return 0;
}
