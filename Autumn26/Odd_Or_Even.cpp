#include <iostream>

int main(){
    int mins, hours, remainder;
    std::cout << "Enter the number of minutes you are waiting for: ";
    std::cin >> mins;
    hours = mins / 60;
    remainder = mins % 60;
    std::cout << "You are waiting for " << hours << " hours and " << remainder << " minutes." << std::endl;
    return 0;
}