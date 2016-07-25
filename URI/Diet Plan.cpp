#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

string solve(string &diet, string &breakfast, string &lunch) {
  string ans = "";
  bool ok = false;
  vector<int> alp(26, 0);

  for (int i = 0; i < diet.size(); i++) alp[diet[i] - 'A']++;
  for (int i = 0; i < breakfast.size(); i++) alp[breakfast[i] - 'A']--;
  for (int i = 0; i < lunch.size(); i++) alp[lunch[i] - 'A']--;

  for (int i = 0; i < 26; i++) {
    if (alp[i] < 0) {
      ok = true;
      break;
    }
  }

  if (ok) ans = "CHEATER";
  else {
    for (int i = 0; i < 26; i++) {
      if (alp[i] > 0) ans += (char)(i + 'A');
    }
  }

  return ans;
}

int main() {
  fast;
  int t;
  string diet, breakfast, lunch;
  cin >> t;
  cin.ignore();

  while (t--) {
    getline(cin, diet);
    getline(cin, breakfast);
    getline(cin, lunch);
    
    cout << solve(diet, breakfast, lunch) << endl;
  }

  return 0;
}
