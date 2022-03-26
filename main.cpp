#include <iostream>
#include "Money.h"
#include "Account.h"

int main() {
    int a = 323;
    int b = 23;
    Money m(a, b); 
    int c = 200;
    int d = 00;
    Money m0(c, d);
    int e = 300;
    int f = 24;
    Money m1(e, f);
    int g = 501;
    int h = 22;
    Money m2(g, h); 
    int i = 10;
    Money m3(e, i);
    int j = 34;
    Money m4(c + 1, j);                                       
    
    Account account(m);

    std::cout << account << std::endl;
    account.makeDeposit(m0);
    account.makeDeposit(m1);
    account.makeDeposit(m2);
    std::cout << account << std::endl;
    account.makeWithdrawals(m3);
    account.makeWithdrawals(m4);
    std::cout << account << std::endl;

//tests > and <
    Money one(100, 17);
    Money two(200, 25);

    if(one > two) {
        std::cout << "One is greater than two" << std::endl;
    } else if(one < two) {
        std::cout << "One is less than two" << std::endl;
    } else {
        std::cout << "Neither greater than nor less than" << std::endl;
    }

    //tests >= and <=
    Money three(300, 10);
    Money four(400, 24);
    Money five (300, 10);

    if(three <= four) {
        std::cout << "Three is less than or equal to four" << std::endl;
    } else if(three >= four) {
        std::cout << "Three is greater than or equal to four" << std::endl;
    } else {
        std::cout << "ERROR three is neither less than, greater than, or equal to four" << std::endl;
    }

    //tests != and ==
    if(three == five) {
        std::cout << "Three is equal to five" << std::endl;
    } else if(three != four) {
        std::cout << "Three is NOT equal to four" << std::endl;
    } else {
        std::cout << "ERROR three is not equal to five and is somehow equal to four" << std::endl;
    }

    //tests std::cout <<
    std::cout << "One is worth " << one << std::endl;
    std::cout << "Two is worth " << two << std::endl;
    std::cout << "Three is worth " << three << std::endl;
    std::cout << "Four is worth " << four << std::endl;
    std::cout << "Five is worth " << five << std::endl;    

    return 0;
}