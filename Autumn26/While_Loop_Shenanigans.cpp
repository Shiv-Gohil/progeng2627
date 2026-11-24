#include <iostream>
int main() {
    std::cout << "So we are going to keep track of your biggest number" << std::endl;
    int MaxNum = 0; int CurrentNum = 0;
    while (MaxNum < 100) {
        std::cout << "Please enter a number: ";
        std::cin >> CurrentNum;
        if (CurrentNum > MaxNum) {
            MaxNum = CurrentNum;
            std::cout <<"New high of " << MaxNum << " had been achieved!" << std::endl;
        } else {
            std::cout << "Your current number is " << CurrentNum << " which is not the highest yet. ";
        }
    }
}