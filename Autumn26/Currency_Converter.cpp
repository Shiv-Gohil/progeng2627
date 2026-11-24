#include <iostream>
int main() {
	double GBP, conversion_rate, euros;
	conversion_rate = 1.18;
	std::cout << "Please enter your amount of GBP (pounds): " << std::endl;
	std::cin >> GBP;
	euros = conversion_rate * GBP;
	std::cout << "The conversion rate today is 1.18 euros per pound, so you have: €" << euros;
}