#include <iostream>
#include <vector>

int main() {
    int n, tmp, s;
    std::vector<int> v;

    std::cout << "Enter n:" << std::endl;
    std::cin >> n;

    for (int i = 0; i < n; i++){
        std::cout << "Enter a number:" << std::endl;
        std::cin >> tmp;
        v.push_back(tmp);
    }
    
    std::cout << "Enter s:" << std::endl;
    std::cin >> s;

    int count = 0;
    for (int i = 0; i < v.size(); i++){
        if (v[i] == s){
            count++;
        }
    }

    std::cout << "The value '" << s << "' appears " << count << " times in the list of n!" << std::endl;
}