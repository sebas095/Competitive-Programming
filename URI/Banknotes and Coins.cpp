#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int toInt(string s) {
  return atoi(s.c_str());
}

void convert(string n, int &a, int &b) {
  bool point = false;
  string s1 = "", s2 = "";
  for (int i = 0; i < n.size(); i++) {
    if (n[i] == '.') {
      point = true;
      continue;
    }
    if (point) s2 += n[i];
    else       s1 += n[i];
  }
  a = toInt(s1);
  b = toInt(s2);
}

int main() {
  fast;
  string num;
  int n, n100, n50, n20, n10, n5, n2, n1, f, f50, f25, f10, f5, f1;
  cin >> num;

  convert(num, n, f);
  n100 = n / 100;
  n50 = (n % 100) / 50;
  n20 = ((n % 100) % 50) / 20;
  n10 = (((n % 100) % 50) % 20) / 10;
  n5 = ((((n % 100) % 50) % 20) % 10) / 5;
  n2 = (((((n % 100) % 50) % 20) % 10) % 5) / 2;
  n1 = (((((n % 100) % 50) % 20) % 10) % 5) % 2;

  f50 = f / 50;
  f25 = (f % 50) / 25;
  f10 = ((f % 50) % 25) / 10;
  f5 = (((f % 50) % 25) % 10) / 5;
  f1 = (((f % 50) % 25) % 10) % 5;

  cout << "NOTAS:" << endl;
  cout << n100 << " nota(s) de R$ 100.00" << endl;
  cout << n50 << " nota(s) de R$ 50.00" << endl;
  cout << n20 << " nota(s) de R$ 20.00" << endl;
  cout << n10 << " nota(s) de R$ 10.00" << endl;
  cout << n5 << " nota(s) de R$ 5.00" << endl;
  cout << n2 << " nota(s) de R$ 2.00" << endl;

  cout << "MOEDAS:" << endl;
  cout << n1 << " moeda(s) de R$ 1.00" << endl;
  cout << f50 << " moeda(s) de R$ 0.50" << endl;
  cout << f25 << " moeda(s) de R$ 0.25" << endl;
  cout << f10 << " moeda(s) de R$ 0.10" << endl;
  cout << f5 << " moeda(s) de R$ 0.05" << endl;
  cout << f1 << " moeda(s) de R$ 0.01" << endl;

  return 0;
}
