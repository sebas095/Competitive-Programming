#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

string solve(string &s1, string &s2, string &s3) {
  if (s1 == "vertebrado") {
    if (s2 == "ave") {
      if (s3 == "carnivoro") return "aguia";
      if (s3 == "onivoro")   return "pomba";
    }
    if (s2 == "mamifero") {
      if (s3 == "onivoro")   return "homem";
      if (s3 == "herbivoro") return "vaca";
    }
  }

  if (s1 == "invertebrado") {
    if (s2 == "inseto") {
      if (s3 == "hematofago") return "pulga";
      if (s3 == "herbivoro")  return "lagarta";
    }
    if (s2 == "anelideo") {
      if (s3 == "hematofago") return "sanguessuga";
      if (s3 == "onivoro")    return "minhoca";
    }
  }
}

int main() {
  fast;
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;
  cout << solve(s1, s2, s3) << endl;
  return 0;
}
