#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define npos string::npos

using namespace std;

bool is_vowel(char c) {
  string v = "aeiou";
  return v.find(c) != npos;
}

string solve(string s) {
  string letters = "", ans = "";
  int index = 0;

  for (int i = 0; i < s.size(); i++) {
    if (!is_vowel(s[i])) letters += s[i];
  }

  reverse(letters.begin(), letters.end());

  for (int i = 0; i < s.size(); i++) {
    if (!is_vowel(s[i])) {
      ans += letters[index++];
    }
    else ans += s[i];
  }

  return ans;
}

int main() {
  fast;
  int n;
  string s;
  cin >> n;

  while (n--) {
    cin >> s;
    cout << solve(s) << endl;
  }

  return 0;
}
