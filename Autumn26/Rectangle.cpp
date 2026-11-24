#include <iostream>

int main() {
    double length, width, area, perimeter;
    std::cout << "Enter rectangle length:" << std::endl;
    std::cin >> length;
    std::cout << "Now enter rectangle width:" << std::endl;
    std::cin >> width;
    area = length * width;
    perimeter = (2 * length) + (2 * width);
    std::cout << "The rectangle has an area of " << area << " cm^2 " << "and a perimeter of length " << perimeter;
}