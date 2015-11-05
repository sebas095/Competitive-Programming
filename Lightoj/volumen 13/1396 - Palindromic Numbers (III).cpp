#include <bits/stdc++.h>

using namespace std;

//FORMA 1
void palindromeNumber(string num) {
  int carry = 1;
  for (int i = 0, j = num.size() - 1; i < num.size(); ++i, --j){
    if (i < j) {
      if (carry) {
        if (num[i] > num[j]){
          num[j] = num[i];
          carry = 0;
        } 
        else {
          num[j] = num[i];
        }
      } 
      else {
        if (num[i] < num[j]) {
          num[j] = num[i];
          carry = 1;
        } 
        else {
          num[j] = num[i];
        }
      }
    } 
    else {
      if (carry) {
        if (num[j] == '9') {
          num[j] = '0';
          num[i] = '0';
        } 
        else {
          num[j]++;
          num[i] = num[j];
          carry = 0;
        }
      }
    }
  }
  if (carry) {
    num[num.size() - 1] = '1';
    num = "1" + num;
  }
  puts(num.c_str());
}

//FORMA 2
void pal_number(string &number) {
  string line = number;
  int carry = 1;

  for (int i = line.size() - 1; i >= 0 && carry; --i) {
    if (line[i] + carry <= '9') {
      line[i]++;
      carry = 0;
    } 
    else {
      line[i] = '0';
    }
  }

  if (carry)
    line = "1" + line;

  carry = 0;
  const int n = line.size() - 1;

  for (int i = 0; i < line.size(); ++i) {
    if (carry && line[n - i] < '9') {
      line[n - i]++;
      carry = 0;
    } 
    else if (carry) {
      line[n - i] = '0';
    }

    if (i <= n - i) {
      if (line[i] > line[n - i]) {
        line[n - i] = line[i];
      } 
      else if (line[i] < line[n - i]) {
        carry  = true;
      }
    } 
    else {
      line[i] = line[n - i];
    }
  }
  puts(line.c_str());
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  string s;
  for (int i = 1; i <= t; ++i) {
    cin>>s;
    printf("Case %d: ", i);
    palindromeNumber(s);
  }
  return 0;
}