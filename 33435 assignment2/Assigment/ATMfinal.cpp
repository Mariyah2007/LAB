#include <iostream>
using namespace std;

int main() {
    double balance = 0.0;
    int option;
    double amount;

    do {
        cout << "\nATM Menu:\n";
        cout << "1. Deposit\n";
        cout << "2. Withdrawl\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your option: ";
        cin >> option;

        if (option == 1) {
            cout << "Please enter the amount to be deposited: PKR ";
            cin >> amount;
            if (amount > 0) {
                balance += amount;
                cout << "Deposited: PKR " << amount << endl;
            } else {
                cout << "Invalid deposit amount.\n";
            }
        } else if (option == 2) {
            cout << "Please enter the amount to be withdrawn: PKR";
            cin >> amount;
            if (amount > 0) {
                if (amount <= balance) {
                    balance -= amount;
                    cout << "Withdrew: PKR " << amount << endl;
                } else {
                    cout << "Insufficient balance!\n";
                }
            } else {
                cout << "Invalid withdrawal amount.\n";
            }
        } else if (option == 3) {
            cout << "The current balance is: PKR " << balance << endl;
        } else if (option == 4) {
            cout << "Thank you!!\n";
        } else {
            cout << "Invalid option. Please try again.\n";
        }
    } while (option != 4);

}
