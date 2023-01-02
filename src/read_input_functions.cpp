#include "read_input_functions.h"

int ReadNubmer() {
    int number = 0;
    while (true) {
        std::cout << "enter your number (0..100): ";
        std::cin >> number;
        if (CheckNumberIsCorrect(number)) {
            std::cout << "input error. a number outside the range 0..100, or you have entered a character." << std::endl;
            std::cin.clear();
            std::cin.ignore();
            continue;
        } else {
            break;
        }
    }
    return number;
}

std::string ReadString() {
    std::string string;
    std::getline(std::cin, string);
    return string;
}