#include <iostream>
#include <cmath>
#include <vector>
int count_negatives(const std::vector<int>& v){
    int neg_count = 0, i = 0;
    for(i = 0; i < v.size(); i++){
        int tmp = v[i];
        if(tmp < 0){
            neg_count++;
        }
    }
    return neg_count;
}
int main(){
    std::vector <int> nums;
    int tmp, count = 0, sum = 0;
    std::cout << "Type whole numbers, one at a time: " << std::endl;
    std::cin >> tmp;
    int largest = tmp;
    while(tmp != 0){
        if(count == 0){
            largest = tmp;
        }
        nums.push_back(tmp);
        count++;
        sum = sum + tmp;
        if (tmp > largest){
            largest = tmp;
        }
        std::cin >> tmp;
    }
    std::cout << "Number of numbers is '" << count << "'" << std::endl;
    std::cout << "Largest number is '" << largest << "'" << std::endl;
    std::cout << "Full list is ";
    for(int i = 0; i < nums.size(); i++){
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;  
    std::cout << "Negatives: " << count_negatives(nums) << std::endl;
}