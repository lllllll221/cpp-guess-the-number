#include "search_number.h"

void SearchMysteryNumber::SearchNumber() {
    while (true) {
        int number = ReadNubmer();
        
        if (mystery_number_ == number) {
            break;
        } else if (mystery_number_ < number) {
            std::cout << number << " is greater than the number i have in my memory." << std::endl;
        } else if (mystery_number_ > number) {
            std::cout << number << " is less than the number i have in my memory." << std::endl;
        }
        
        step_++;
    }
}