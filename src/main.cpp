#include <iostream>
#include <random>

#include "log_duration.h"
#include "search_number.h"
#include "check_functions.h"

int main() {
    std::cout << "--------------------------------------------------------------------------------" << std::endl;
    std::cout << "-------------------------HI-LET'S-PLAY-GUESS-THE-NUMBER-------------------------" << std::endl;

    while (true) {
        std::cout << "--------------------------------------------------------------------------------" << std::endl;
    
        LOG_DURATION("time spent searching for the number");
    
        {
            SearchMysteryNumber sample;
        }
    
        std::cout << "want to play again? y/N: ";
        std::string user = ReadString();

        if (!CheckUserInput()) {
            break;
        } else {
            continue;
        }
    }
    
    std::cout << "bye." << std::endl;
    std::cout << "--------------------------------------------------------------------------------" << std::endl;
}