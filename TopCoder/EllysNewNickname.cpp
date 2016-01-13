#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

class EllysNewNickname {
private:
  bool isVowel(char c) {
    return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u' or c == 'y';
  }

public:
  int getLength(string s) {
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
      if (isVowel(s[i]) and isVowel(s[i + 1]) and i < s.size() - 1) {
        continue;
      }
      ans++;
    }
    return ans;
  }
};
