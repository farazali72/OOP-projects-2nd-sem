#include <iostream>
using namespace std;

class Patient {
private:
	int id;
	int age;
public:
	Patient(int i, int a) {
		id = i;
		age = a;
	}

	void display() {
		cout << "Pateint Record" << endl;
		cout << "Patient ID :" << id << endl;
		cout << "Patient Age: " << endl;
	}
};
int main() {
	Patient p1(123, 20);
	Patient p2(143, 18);
	p1.display();
	p2.display();

return 0;
}


