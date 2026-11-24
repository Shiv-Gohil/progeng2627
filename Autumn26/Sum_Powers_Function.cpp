#include <iostream>

// our own pow, works for negative integer exponents too
double mypow(double base, int exp){
    double result = 1;              // anything^0 = 1, so start at 1
    int e = exp;
    if (e < 0) {
        e = -e;                     // work with the positive exponent
    }
    for (int i = 0; i < e; i++) {
        result = result * base;     // repeated multiplication
    }
    if (exp < 0) {
        result = 1 / result;        // x^(-n) = 1 / x^n
    }
    return result;
}

// x^0 + x^1 + ... + x^n
double sumpow(double x, int n){
    double sum = 0;
    for (int i = 0; i <= n; i++) {
        sum = sum + mypow(x, i);
    }
    return sum;
}

int main(){
    double x;
    int n;
    std::cout << "enter x and n" << std::endl;
    std::cin >> x >> n;
    std::cout << "sum of powers: " << sumpow(x, n) << std::endl;
}