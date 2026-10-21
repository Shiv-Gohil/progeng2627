#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int row = 0, many = 0, column = 0;
    for (row = 1; row <= 30; row++) {
        for (column = 1; column <= 30; column++) {
            std::cout << column << " ";
            if (row %2 == 0 || column % 2 == 0 || row == column) {
                std::cout << "\t";
            }
            if (column*column == row) {
                many = many + 1;
            }
        }
        std::cout << std::endl;
    }
    std::cout << "Well, we got " << many << " square things?" << std::endl;
    std::cout << std::fixed << std::setprecision(0);
    std::cout << "Now, enter a number for power of 2: ";
    std::cin >> many;
    for(row = 0; row < many; row++) {
        std::cout << pow(2, row) << " ";
    }
    std::cout << std::endl;
} 
