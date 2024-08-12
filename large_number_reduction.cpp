#include <iostream>
#include <cmath>

void testTheory(int n) {
    double leftSide = pow(2, n);
    double rightSide = pow(2, n / 4.0);

    std::cout << "Testing n = " << n << std::endl;
    std::cout << "Left side (2^n): " << leftSide << std::endl;
    std::cout << "Right side (2^(n/4)): " << rightSide << std::endl;

    if (leftSide < rightSide) {
        std::cout << "The theory holds: 2^n < 2^(n/4)" << std::endl;
    } else {
        std::cout << "The theory does NOT hold: 2^n >= 2^(n/4)" << std::endl;
    }
    std::cout << std::string(40, '-') << std::endl;
}

int main() {
    for (int n = 1; n <= 20; ++n) {
        testTheory(n);
    }
    return 0;
}
