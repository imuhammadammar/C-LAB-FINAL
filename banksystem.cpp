#include <iostream>
using namespace std;

float initial_bal = 10000;
float final_bal = 10000;

void bal_inq() {
    cout << "\tBALANCE INQUIRY" << endl;
    cout << "Your current balance is: " << final_bal << endl;
}

void dep_money() {
    float dep;
    cout << "Enter amount to deposit: ";
    cin >> dep;

    final_bal += dep;
    cout << "New balance: " << final_bal << endl;
}

void withdraw_money() {
    float withdraw;
    cout << "Enter amount to withdraw: ";
    cin >> withdraw;

    if (withdraw > final_bal) {
        cout << "Insufficient balance!" << endl;
    } else {
        final_bal -= withdraw;
        cout << "Amount withdrawn successfully." << endl;
        cout << "Remaining balance: " << final_bal << endl;
    }
}

int main() {
    const int idd = 12345;
    const int pinn = 6789;

    int id, pin, choice;

    cout << "Enter User ID: ";
    cin >> id;
    cout << "Enter PIN: ";
    cin >> pin;

    if (id == idd && pin == pinn) {
        do {
            cout << "\n---- ONLINE BANK MENU ----" << endl;
            cout << "1. Balance Inquiry" << endl;
            cout << "2. Deposit Money" << endl;
            cout << "3. Withdraw Money" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    bal_inq();
                    break;
                case 2:
                    dep_money();
                    break;
                case 3:
                    withdraw_money();
                    break;
                case 4:
                    cout << "Exiting..." << endl;
                    break;
                default:
                    cout << "Invalid choice!" << endl;
            }

        } while (choice != 4);
    } else {
        cout << "Incorrect ID or PIN!" << endl;
    }

    return 0;
}
