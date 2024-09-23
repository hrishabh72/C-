#include<iostream>
#include"Account.h"
using namespace std;

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