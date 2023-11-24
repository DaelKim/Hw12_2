#include<iostream>
using namespace std;
class Person {
public:
	Person(int x) { cout << "Person::Person(int ) called" << endl; }
	Person() { cout << "Person::Person() called" << endl; }
	int tall=180;
};

class Faculty : virtual public Person {
public:
	int pay = 5000000;
	Faculty(int x) :Person(x) {
		cout << "Faculty::Faculty(int ) called" << endl;
	}
};

class Student : virtual public Person {
public:
	float grade = 3.5;
	Student(int x) :Person(x) {
		cout << "Student::Student(int ) called" << endl;
	
	}
};

class TA : public Faculty, public Student {
public:
	TA(int x) :Student(x), Faculty(x) {
		cout << "TA::TA(int ) called" << endl;
		cout << tall << " " << grade << " " << pay << endl;
	}
};

int main() {
	TA ta1(30);
}
