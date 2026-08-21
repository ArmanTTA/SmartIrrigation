#include "phase1.h"
#include <iostream>

int main() {
    runPhaseOneTask();
    int result = calculateScore(5, 10);
    std::cout << "Result: " << result << std::endl;
    return 0;
}