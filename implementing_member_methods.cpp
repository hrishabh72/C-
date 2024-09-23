#include <iostream>
#include <vector>
using namespace std;

class account
{
private:
    // attribute
    string name;
    double balance;

public:
    // methods
    // declared inline
    void set_balance(double bal) { balance = bal; }
    double get_balance() { return balance; }

    // method will be declared outside of the class declaration
    void set_name(string n);
    string get_name();
    bool deposit(double amount);
    bool withdraw(double amount);
};

void account::set_name(string n)
{
    name = n;
}

string account::get_name()
{
    return name;
}

bool account::deposit(double amount)
{
    // if verify amount
    balance += amount;
    return true;
}

bool account::withdraw(double amount)
{
    if (balance - amount >= 0)
    {
        balance -= amount;
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    account frank_account;
    frank_account.set_name("frank's account");
    frank_account.set_balance(1000.0);

    if (frank_account.deposit(200.0))
    {
        cout << "deposit ok" << endl;
    }
    else
    {
        cout << "deposit not allowed";
    }
    if (frank_account.withdraw(500.0))
    {
        cout << "withdraw  ok" << endl;
    }
    else
    {
        cout << "notsufficient balance" << endl;
    }
    if (frank_account.withdraw(1500.0))
    {
        cout << "withdraw  ok" << endl;
    }
    else
    {
        cout << "notsufficient balance" << endl;
    }

    return 0;
}