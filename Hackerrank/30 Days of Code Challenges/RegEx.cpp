#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
  fast;
  int t;
  multiset<string> users;
  regex email("([a-z .]+)@gmail.com");
  string userName, emailId;
  cin >> t;

  while (t--) {
    cin >> userName >> emailId;
    if (regex_match(emailId, email)) {
      users.insert(userName);
    }
  }

  for (const auto &user : users) {
    cout << user << endl;
  }

  return 0;
}
