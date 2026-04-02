#include <iostream>
#include <string>
#include "Array.hpp"

int main( void ) {
    std::cout << "--- empty array" << std::endl;
    Array<int> empty;
    std::cout << "empty size: " << empty.size() << std::endl;

    std::cout << "\n--- array of 5 ints" << std::endl;
    Array<int> nums(5);
    std::cout << "nums size: " << nums.size() << std::endl;
    for (unsigned int i = 0; i < nums.size(); i++)
        std::cout << "nums[" << i << "] = " << nums[i] << std::endl;

    for (unsigned int i = 0; i < nums.size(); i++)
        nums[i] = i * 10;

    std::cout << "\n--- deep copy (does not modify original)" << std::endl;
    Array<int> copy(nums);
    std::cout << "nums[0] = " << nums[0] << std::endl;
    std::cout << "copy[0] = " << copy[0] << std::endl;
    copy[0] = 999;
    std::cout << "nums[0] = " << nums[0] << std::endl;
    std::cout << "copy[0] = " << copy[0] << std::endl;

    std::cout << "\n--- assignment operator" << std::endl;
    Array<int> assigned;
    assigned = nums;
    std::cout << "nums[1] = " << nums[1] << std::endl;
    std::cout << "assigned[1] = " << assigned[1] << std::endl;
    assigned[1] = 888;
    std::cout << "nums[1] = " << nums[1] << std::endl;
    std::cout << "assigned[1] = " << assigned[1] << std::endl;

    std::cout << "\n--- access out of bounds" << std::endl;
    try {
        nums[24];
    } catch (std::exception& e) {
        std::cout << "error: index out of bounds" << std::endl;
    }

    std::cout << "\n--- array of strings" << std::endl;
    Array<std::string> strings(3);
    strings[0] = "antônio";
    strings[1] = "rodrigues";
    strings[2] = "tone";
    for (unsigned int i = 0; i < strings.size(); i++)
        std::cout << "strings[" << i << "] = " << strings[i] << std::endl;

    return 0;
}
