#include "check_functions.h"

bool CheckNumberIsCorrect(const int& number) {
    return (!number) || (number < 0) || (number > 100);
}

void CheckStep(const int& step) {
    if (step == 1) {
        std::cout << step << " move made." << std::endl;
    } else {
        std::cout << step << " moves made." << std::endl;
    }
}

bool CheckUserInput() {
    std::string user = ReadString();
    return (user == "Y") || (user == "y") || (user == "Yes") || (user == "yes");
}