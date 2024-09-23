#ifndef       ACCOUNT_H_
#define       ACCOUNT_H_

#include <string>
class account
{
private:
    // attribute
    std::string name;
    double balance;

public:
    // methods
    // declared inline
    void set_balance(double bal) { balance = bal; }
    double get_balance() { return balance; }

    // method will be declared outside of the class declaration
    void set_name(std::string n);
    std::string get_name();
    bool deposit(double amount);
    bool withdraw(double amount);
};
#endif