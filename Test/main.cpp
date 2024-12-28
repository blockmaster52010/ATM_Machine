#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    double balance = 0.0;
    int choice;
    bool atm_running = true;
    while (atm_running) {        
        cout << "ATM Menu:" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;
        switch (choice) {
            case 1:
                cout << "Your balance is " << balance << "$" << endl;
                break;
            case 2: {
                double amount;
                cout << "How much would you like to deposit: ";
                cin >> amount;
                balance += amount;
                break;
            }
            case 3: {
                double amount;
                cout << "How much would you like to withdraw: ";
                cin >> amount;
                balance -= amount;
                break;
            }
            default:
                atm_running = false;
                cout << "Exiting Program" << endl;
                break;
                
        }
        cout << endl;
    }
    return 0;
}

