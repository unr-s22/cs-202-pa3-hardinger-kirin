#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "Money.h"
#include <iostream>
#include <vector>


class Account{
private:
    bool updateBalFlag = false;
    Money balance;
    std::vector<Money> Deposits;
    std::vector<Money> WithDrawals;
public:  
    //Default Constructor
    Account();
    //Parameterized Constructor
    Account(Money m);
    //Deposit Function
    void makeDeposit(Money m);
    //WithDrawal Function
    void makeWithdrawals(Money m);
    Account operator + (const Account& other);
    friend std::ostream& operator << (std::ostream& out, const Account& account);
   

};

#endif