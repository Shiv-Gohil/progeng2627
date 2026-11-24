#include <iostream>
int add (int a, int b){
    return a + b;
}
int square (int c){
    return c * c;
}
int main(){
    int a, b, c;
    std::cout << "Please enter two numbers to add" << std::endl;
    std::cin >> a >> b;
    std::cout << "The sum of " << a << " and " << b << " is: " << add(a, b) << std::endl;
    std::cout << "Choose a number to square: " << std::endl;
    std::cin >> c;
    std::cout << "The square of " << c << " is: " << square(c) << std::endl;
}
