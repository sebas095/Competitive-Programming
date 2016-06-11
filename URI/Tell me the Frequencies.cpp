#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

bool myfunc(const pair<int, int> &a, const pair<int, int> &b) {
  if (a.first == b.first) {
    return a.second > b.second;
  }
  return a < b;
}

int main() {
  fast;
  int nc = 0;
  string s;

  while (cin >> s) {
    if (nc) cout << endl;
    nc++;
    vector<pair<int,int> > ans;
    map<char, int> frec;
    map<char, int>::iterator it;

    for(int i = 0; i < s.size(); i++) frec[s[i]]++;
    for (it = frec.begin(); it != frec.end(); ++it) {
      ans.push_back(make_pair((it -> second), (int)(it -> first)));
    }

    sort(ans.begin(), ans.end(), myfunc);
    for (int i = 0; i < ans.size(); i++) {
      cout << ans[i].second << " " << ans[i].first << endl;
    }
  }

  return 0;
}
