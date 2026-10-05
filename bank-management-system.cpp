#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string name;
    int accountNumber;
    double balance;

public:
    void createAccount()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit()
    {
        double amount;

        cout << "Enter Deposit Amount: ";
        cin >> amount;

        balance = balance + amount;

        cout << "Amount Deposited Successfully\n";
    }

    void withdraw()
    {
        double amount;

        cout << "Enter Withdraw Amount: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount Withdrawn Successfully\n";
        }
        else
        {
            cout << "Insufficient Balance\n";
        }
    }

    void display()
    {
        cout << "\n----- Account Details -----\n";
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account;
    int choice;

    account.createAccount();

    do
    {
        cout << "\n===== BANK MANAGEMENT SYSTEM =====\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Display Account\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            account.deposit();
        }
        else if (choice == 2)
        {
            account.withdraw();
        }
        else if (choice == 3)
        {
            account.display();
        }
        else if (choice == 4)
        {
            cout << "Thank You!\n";
        }
        else
        {
            cout << "Invalid Choice\n";
        }

    } while (choice != 4);

    return 0;
}