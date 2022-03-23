#include "Money.h"

int main() {
    //REMOVE THIS. THIS IS SIMPLY TO TEST THE OVERLOADS OF OPERATORS AND TO SHOW YOU HOW THEY WORK
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

    //

    return 0;
}