#include "generation_number.h"

int GenerationNumber() {
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(1,100);
    return dist6(rng);
}