#include <iostream>
using namespace std;

class Account {
    int accountNo;        
    string holderName;    
    double balance;       
public:
    Account(int acc, string name, double bal) {
        accountNo = acc;
       holderName = name;
        balance = bal;
    }

    
    void deposit(double amount) {
        balance += amount;
     cout << "Deposited: " << amount << endl;
    }

    
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
          cout << "Withdrawn: " << amount << endl;
        } else {
         cout << "Insufficient balance!" << endl;
        }
    }

    void display() {
        cout << "-------------------------" << endl;
        cout << "Account No: " << accountNo << endl;
        cout << "Holder:     " << holderName << endl;
        cout << "Balance:    " << balance << endl;
        cout << "-------------------------" << endl;
    }
};


int main() {
    
    Account a1(101, "Ali", 5000);

    
    a1.deposit(2000);   
 a1.withdraw(1000);  
    a1.display();       
}
