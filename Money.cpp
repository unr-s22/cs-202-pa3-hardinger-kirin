#include "Money.h"

//paramaterized constructor
Money::Money(int dollars, int cents) {
    m_dollars = dollars;
    m_cents = cents;
}

//overload + operator
Money Money::operator + (const Money& other) {
    int total_dollars = m_dollars + other.m_dollars;
    int total_cents = m_cents + other.m_cents;

    //accounting for rollover
    while (total_cents >= 100) {
        total_cents -= 100;
        total_dollars += 1;
    }

    return Money(total_dollars, total_cents);
}

//overlaod - operator
Money Money::operator - (const Money& other) {
    int total_dollars = m_dollars - other.m_dollars;
    int total_cents = m_cents - other.m_cents;

    //accounting for rollover
    while (total_cents <= -100) {
        total_cents += 100;
        total_dollars -= 1;
    }

    //if there was no rollover, then there is still a positive value of cents. this accounts for that
    if(total_dollars < 0 && total_cents > 0) {
        total_dollars += 1;
        total_cents -= 100;
    }

     return Money(total_dollars, total_cents);
}

//overload < operator
bool Money::operator < (const Money& other) {
    return ((m_dollars < other.m_dollars) || ((m_dollars == other.m_dollars) && (m_cents < other.m_cents)));
}

//overload > operator
bool Money::operator > (const Money& other) {
    return ((m_dollars > other.m_dollars) || ((m_dollars == other.m_dollars) && (m_cents > other.m_cents)));
}

//overload >= operator
bool Money::operator >= (const Money& other) {
    return ((m_dollars >= other.m_dollars) || ((m_dollars == other.m_dollars) && (m_cents >= other.m_cents)));
}

//overload <= operator
bool Money::operator <= (const Money& other) {
    return ((m_dollars <= other.m_dollars) || ((m_dollars == other.m_dollars) && (m_cents <= other.m_cents)));
}

//overload != and == operators
bool Money::operator != (const Money& other) {
    return ((m_dollars != other.m_dollars) || (m_cents != other.m_cents));
}

bool Money::operator == (const Money& other) {
    return ((m_dollars == other.m_dollars) && (m_cents == other.m_cents));
}

//Implementation of overloading stream operator <<
std::ostream& operator << (std::ostream& out, const Money& money) {
    out << "$" << money.m_dollars << "." << money.m_cents;
    return out;
}