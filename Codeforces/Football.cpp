#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'
#define npos string::npos

using namespace std;

int main() {
  fast;
  string ones = "1111111";
  string zeros = "0000000";
  string s;

  cin >> s;
  (s.find(ones) != npos or s.find(zeros) != npos)? cout << "YES" : cout << "NO";
  cout << endl;
  
  return 0;
}
