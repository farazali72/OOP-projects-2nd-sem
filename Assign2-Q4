#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int    accountNumber;
    string customerName;
    double balance;

public:
    BankAccount(int accNo, string name, double bal) {
        accountNumber = accNo;
        customerName = name;
        balance = bal;
        cout << "Account created for: " << customerName << endl;
    }

    BankAccount() {
        cout << "Account destroyed for: " << customerName << endl;
    }

    void display() {
        cout << " Account Details" << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Customer Name  : " << customerName << endl;
        cout << "Balance        : Rs." << balance << endl;
    }
};



int main() {
    BankAccount acc1(101, "Ahmed pashemani", 75000);
    BankAccount acc2(102, "Sameer wakti", 12000);

    acc1.display();
    acc2.display();

    
    return 0;
}
