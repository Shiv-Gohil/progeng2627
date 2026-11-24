#include <iostream>
#include <cmath>
int main() {
    double base, exponent;
    std::cout << "Enter a base and an exponent: ";
    std::cin >> base >> exponent;
    double sum = 0;
    for (int i = 1; i <= exponent; i++) {
        sum = sum + pow(base, i);
    }
    std::cout << "The sum of " << base << "^" << exponent << " is: " << sum << std::endl;
}
