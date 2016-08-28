#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

class Person {
public:
  int age;
  Person(int initialAge);
  void amIOld();
  void yearPasses();
};

Person::Person(int initialAge) {
  if (initialAge < 0) {
    this -> age = 0;
    cout << "Age is not valid, setting age to 0." << endl;
  }
  else {
    this -> age = initialAge;
  }
}

void Person::amIOld() {
  if (this -> age < 13) {
    cout << "You are young." << endl;
  }
  else if (this -> age >= 13 and this -> age < 18) {
    cout << "You are a teenager." << endl;
  }
  else cout << "You are old." << endl;
}

void Person::yearPasses() {
  this -> age++;
}

int main() {
  int t, age;
  cin >> t;

  while (t--) {
    int count = 3;
    cin >> age;
    Person p(age);
    p.amIOld();
    while (count--) p.yearPasses();
    p.amIOld();
    cout << endl;
  }

  return 0;
}
