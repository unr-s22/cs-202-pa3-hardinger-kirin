#ifndef MONEY_H
#define MONEY_H

#include <iostream>

class Money {
private:
    int m_dollars = 0;
    int m_cents = 0;
public:
    //paramaterized constructor
    Money(int dollars, int cents);

    //default constructor
    Money();

    //overload + operator
    Money operator + (const Money& other);

    //overload - operator
    Money operator - (const Money& other);

    //overload > and < operators
    bool operator > (const Money& other);
    bool operator < (const Money& other);

    //oveerload >= and <= operators
    bool operator >= (const Money& other);
    bool operator <= (const Money& other);

    //overload != and == operators
    bool operator != (const Money& other);
    bool operator == (const Money& other);

    //overloading stream operator <<
    friend std::ostream& operator << (std::ostream& out, const Money& money);
};

#endif