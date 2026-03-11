#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int    employeeID;
    string employeeName;
    string department;
    double monthlySalary;

public:
    
    Employee(int id, string name, string dept, double salary) {
        employeeID = id;
        employeeName = name;
        department = dept;
        monthlySalary = salary;
        cout << "Employee object created for: " << employeeName << endl;
    }

    
    Employee() {
        cout << "Employee object destroyed for: " << employeeName << endl;
    }

    void display() {
        cout << "\nEmployee Details " << endl;
        cout << "Employee ID     : " << employeeID << endl;
        cout << "Employee Name   : " << employeeName << endl;
        cout << "Department      : " << department << endl;
        cout << "Monthly Salary  : Rs." << monthlySalary << endl;
    }
};

int main() {
    Employee e1(201, "Usman khadar", "Software", 85000);
    Employee e2(202, "Hira bockthai", "HR", 60000);

    e1.display();
    e2.display();

    
    return 0;
}
