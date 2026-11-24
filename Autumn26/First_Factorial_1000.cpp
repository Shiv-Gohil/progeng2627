#include <iostream>
int main(){
    long long fact = 1;   // running product
    int i = 0;            // which factorial we're on

    while(fact <= 1000){  // keep going until we pass 1000
        i++;              // move to the next number
        fact = fact * i;  // multiply by it
    }

    std::cout << "The first factorial above 1000 is " << i << "! = " << fact << std::endl;
}