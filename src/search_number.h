#pragma once

#include <iostream>

#include "check_functions.h"
#include "generation_number.h"
#include "read_input_functions.h"

class SearchMysteryNumber{
public:
    explicit SearchMysteryNumber() : mystery_number_(GenerationNumber()) {
        // std::cout << "mystery number: " << mystery_number_ << std::endl;
        SearchNumber();
    }

    ~SearchMysteryNumber() {
        std::cout << "you win. ";
        CheckStep(step_);
    }

private:
    const int mystery_number_ = 0;
    int step_ = 1;

    void SearchNumber();
};