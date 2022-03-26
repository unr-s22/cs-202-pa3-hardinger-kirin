#include "Account.h"
#include "Money.h"

//Parameterized Constructor
Account::Account(Money m){
    bool updateBalFlag = false;    
    balance = m;
}
Account::Account(){}

void Account::makeDeposit(Money m){
    Deposits.push_back(m);
    updateBalFlag = true;
}

void Account::makeWithdrawals(Money m){
    WithDrawals.push_back(m);
    updateBalFlag =  true;
}

std::ostream& operator << (std::ostream& out, const Account& account) {
    if(account.updateBalFlag == true){
        Money nbalance = account.balance;
        for(int j = 0; j < account.Deposits.size(); j++){
            nbalance = nbalance + account.Deposits[j];
        }
        for(int j = 0; j < account.WithDrawals.size(); j++){
            nbalance = nbalance - account.WithDrawals[j];
        }
        out << "Account Details" << std::endl;
        out << "--------------------------" << std::endl;
        out << "Current Balance:" << nbalance << std::endl;
        out << "-------------------------" << std::endl;
        out << "Number of Deposits: " << account.Deposits.size() << std::endl;
        out << "--------------------" << std::endl;
        for(int i = 0; i < account.Deposits.size(); i++){
            out << "(" << i + 1 << ")" << account.Deposits[i] << std::endl;
        }
        out << "--------------------------" << std::endl;
        out << "Number of Withdrawals: " << account.WithDrawals.size() << std::endl;
        out << "--------------------------" << std::endl;
        for(int i = 0; i < account.WithDrawals.size(); i++){
            out << "(" << i + 1 << ")" << account.WithDrawals[i] << std::endl;
        }
    }    
    else{
        out << "Account Details" << std::endl;
        out << "--------------------------" << std::endl;
        out << "Current Balance:" << account.balance << std::endl;
        out << "-------------------------" << std::endl;
        out << "Number of Deposits: " << account.Deposits.size() << std::endl;
        out << "--------------------" << std::endl;
        for(int i = 0; i < account.Deposits.size(); i++){
            out << "(" << i + 1 << ")" << account.Deposits[i] << std::endl;
        }
        out << "--------------------------" << std::endl;
        out << "Number of Withdrawals: " << account.WithDrawals.size() << std::endl;
        out << "--------------------------" << std::endl;
        for(int i = 0; i < account.WithDrawals.size(); i++){
            out << "(" << i + 1 << ")" << account.WithDrawals[i] << std::endl;
        }
    }
    return out;    
}