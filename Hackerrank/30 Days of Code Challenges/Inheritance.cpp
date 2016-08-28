#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

class Person {
protected:
	string firstName;
	string lastName;
	int id;
public:
	Person(string firstName, string lastName, int identification) {
		this->firstName = firstName;
		this->lastName = lastName;
		this->id = identification;
	}
	void printPerson() {
		cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
	}
};

class Student : public Person {
private:
	vector<int> testScores;
public:
	Student(string firstName, string lastName, int identification, vector<int> &score)
  : Person(firstName, lastName, identification) {
    this->testScores = score;
  }
  char calculate() {
    double average = accumulate(this->testScores.begin(), this->testScores.end(), 0.0);
    average /= this->testScores.size();

    if (average < 40) return 'T';
    if (average >= 40 and average < 55) return 'D';
    if (average >= 55 and average < 70) return 'P';
    if (average >= 70 and average < 80) return 'A';
    if (average >= 80 and average < 90) return 'E';
    if (average >= 90 and average <= 100) return 'O';
  }
};

int main() {
	string firstName;
  string lastName;
	int id, numScores;
  vector<int> scores;
	cin >> firstName >> lastName >> id >> numScores;

  for (int i = 0; i < numScores; i++) {
		int tmpScore;
		cin >> tmpScore;
		scores.push_back(tmpScore);
	}

  Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << endl;
	return 0;
}
