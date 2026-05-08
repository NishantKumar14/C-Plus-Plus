#include <iostream>

using namespace std;

class BankAccount {
    private:
        string accountNumber;
        double balance;

    public:
        BankAccount(string accountNo, double initialBalance) {
            accountNumber = accountNo;
            balance = initialBalance;
        }

        // getter
        double getBalance() {
            return balance;
        }

        // method to deposit money
        void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
                cout << "Deposited amount: " << amount << endl; 
            } else {
                cout << "Invalid deposit amount!" << endl;
            }
        }

        void withdraw(double amount) {
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Withdrawed amount: " << amount << endl;
            } else {
                cout << "Invalid withdraw amount!" << endl;
            }
        }
};

int main() {
    BankAccount myAccount("1122334455", 500);
    myAccount.getBalance();
    myAccount.deposit(400);
    myAccount.withdraw(300);
    return 0;
}