#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

// Problem: https://www.hackerrank.com/contests/womens-codesprint/challenges/grouping-the-items

using namespace std;

string get_key(string s) {
  string key = s;
  sort(key.begin(), key.end());
  return key;
}

void solve(map<string, set<string>> &group) {
  int ms = 0, sz = 0, index = 0;
  map<string, set<string>> items;

  // Buscamos el grupo que tenga la mayor cantidad de elementos
  for (auto &it : group) {
    ms = max(ms, (int)(it.second.size()));
  }

  // Agrupamos dejando como llave el mayor elemento del grupo
  for (auto &it : group) {
    if (it.second.size() == ms) {
      sz++;
      items[*(it.second.rbegin())] = it.second;
    }
  }

  // Pasamos los grupos a un vector para mostrarlo en el formato pedido
  vector<vector<string>> ans(sz);
  for (auto &it : items) {
    if (it.second.size() == ms) {
      for (auto &itt : it.second) {
        ans[index].push_back(itt);
      }
      index++;
    }
    else continue;
  }

  cout << group.size() << endl;
  for (int i = 0; i < ans.size(); i++) {
    for (int j = ans[i].size() - 1; j >= 0; j--) {
      cout << ans[i][j];
      if (j > 0) cout << " ";
    }
    cout << endl;
  }
}

int main() {
  fast;
  int n, ms = 0;
  string s;
  map<string, set<string>> group;
  cin >> n;

  while (n--) {
    cin >> s;
    group[get_key(s)].insert(s);
  }

  solve(group);
  return 0;
}
