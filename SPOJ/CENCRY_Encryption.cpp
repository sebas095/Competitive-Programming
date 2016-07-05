#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

const string consonants = "bcdfghjklmnpqrstvwxyz";
const string vowels = "aeiou";

void calc(map<char, string> &ans1) {
  for (int i = 0; i < vowels.size(); i++) {
    int j = i;
    while (true) {
      ans1[vowels[i]] += consonants[j % consonants.size()];
      if (ans1[vowels[i]].size() == consonants.size()) break;
      j += vowels.size();
    }
  }

  for (int i = 0; i < consonants.size(); i++) {
    int j = i;
    while (true) {
      ans1[consonants[i]] += vowels[j % vowels.size()];
      if (ans1[consonants[i]].size() == vowels.size()) break;
      j += consonants.size();
    }
  }
}

int main() {
  fast;
  int nc;
  string s;
  map<char, string> ans1;
  calc(ans1);
  cin >> nc;

  while (nc--) {
    map<char, int> frec;
    string ans;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
      frec[s[i]]++;
    }

    for (int i = s.size() - 1; i >= 0; i--) {
      ans += ans1[s[i]][(frec[s[i]] - 1) % ans1[s[i]].size()];
      frec[s[i]]--;
    }

    reverse(ans.begin(), ans.end());
    cout << ans << endl;
  }

  return 0;
}
