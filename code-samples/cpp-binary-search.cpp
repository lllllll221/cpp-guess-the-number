#include <iostream>
#include <random>

#include "log_duration.h"

bool CheckNumber(const int& number) {
    return (!number) || (number < 0) || (number > 100);
}

int ReadNubmer() {
    int number = 0;
    while (true) {
        std::cout << "enter your number (0..100): ";
        std::cin >> number;
        if (CheckNumber(number)) {
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

int GenerationNumber() {
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(1,100);
    return dist6(rng);
}

void CheckStep(const int& step) {
    if (step == 1) {
        std::cout << step << " move made." << std::endl;
    } else {
        std::cout << step << " moves made." << std::endl;
    }
}

void SearchNumber(const int& random_nuber) {
    int step = 1;
    while (true) {
        int number = ReadNubmer();
        
        if (random_nuber == number) {
            std::cout << "you win. ";
            CheckStep(step);
            break;
        } else if (random_nuber < number) {
            std::cout << number << " is greater than the number i have in my memory." << std::endl;
        } else if (random_nuber > number) {
            std::cout << number << " is less than the number i have in my memory." << std::endl;
        }
        step++;
    }
}

int main() {
    {
        LOG_DURATION("time spent searching for the number");

        const int random_nuber = GenerationNumber();

        std::cout << "mystery number: " << random_nuber << std::endl;
        
        SearchNumber(random_nuber);
    }
}