#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	int rollno;
	string name;
public:
	void inputData() {
		cout << "Enter your Roll Number :";
		cin >> rollno;

		cout << "Enter your name :";
		cin.ignore();
		getline(cin, name);
	}
	void displayData() {
		cout << "\n====Student==" << endl;
		cout << "Roll Number :" << rollno << endl;
		cout << "Name: " << name << endl;
	}
};
int main() {
	Student s1;

	s1.inputData();
	s1.displayData();

	return 0;
}
