#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    
    private:
    string accountNumber;
    string accountHolderName;
    double balance;

    public:
    BankAccount(string accNo, string name, double bal)
    {
        this->accountNumber = accNo;
        this->accountHolderName = name;
        this->balance = bal;
    }

    void deposit(double amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid Deposit Amount" << endl;
        }
        else
        {
            balance += amount;
        }
    }

    void withdraw(double amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient Funds" << endl;
        }
        else
        {
            balance -= amount;
        }
    }

    double getBalance()
    {
        return balance;
    }
};

int  main()
{
    string accNo, name;
    double balance, dAmount, wAmount;

    cout<<"Enter Account Number: ";
    cin>>accNo;
    cout<<"Enter Account  Name: ";
    cin>>name;
    cout<<"Enter Account Balance: ";
    cin>>balance;

    BankAccount account(accNo, name, balance);

    cout << "Enter Deposit Amount: ";
    cin >> dAmount;
    account.deposit(dAmount);

    cout << "Enter Withdraw Amount: ";
    cin >> wAmount;
    account.withdraw(wAmount);

    cout << "Balance: " << account.getBalance() << endl;
    return 0;
}